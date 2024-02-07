/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:41:31 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 14:09:23 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter{

private:
	std::string	_name;
	int			_history_index;
	AMateria*	_materia[4];
	AMateria*	_materia_history[10];

public:
	Character(std::string name);
	Character(const Character& character);
	Character& operator=(const Character& character);
	~Character();
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif