/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 16:01:10 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	std::cout << "---------------- My test ----------------" << std::endl;
	IMateriaSource* s1 = new MateriaSource();
	s1->learnMateria(new Ice());
	s1->learnMateria(new Ice());
	s1->learnMateria(new Cure());
	s1->learnMateria(new Ice());
	s1->learnMateria(new Ice());
	
	ICharacter* user1 = new Character("CPP");
	user1->equip(s1->createMateria("ice"));
	user1->equip(s1->createMateria("cure"));
	user1->equip(s1->createMateria("cure"));
	user1->equip(s1->createMateria("ice"));
	user1->equip(s1->createMateria(""));
	user1->equip(s1->createMateria("sdfadfgfads"));
	
	user1->use(0, *user1);
	user1->use(1, *user1);
	user1->use(2, *user1);
	user1->use(3, *user1);
	user1->use(4, *user1);
	
	user1->equip(s1->createMateria("ice"));
	user1->equip(s1->createMateria("ice"));
	user1->use(0, *user1);
	user1->use(1, *user1);
	user1->use(2, *user1);
	user1->use(3, *user1);
	
	user1->unequip(1);
	user1->unequip(1);
	user1->use(0, *user1);
	user1->use(1, *user1);
	user1->use(2, *user1);
	user1->use(3, *user1);
	user1->unequip(0);
	user1->unequip(2);
	user1->unequip(3);
	user1->use(0, *user1);
	user1->use(1, *user1);
	user1->use(2, *user1);
	user1->use(3, *user1);
	
	std::cout << "---------------  End of my test ---------" << std::endl;
	std::cout << std::endl;
	delete s1;
	delete user1;
	delete bob;
	delete me;
	delete src;
	return 0;
}
