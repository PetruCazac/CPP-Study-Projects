/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 14:51:26 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(){
	ClapTrap	trap1("Batman");
	ClapTrap	trap2("Flash");
	std::cout << std::endl;
	ScavTrap	trap3("Superman");
	std::cout << std::endl;
	ScavTrap	trap4("Hulk");

	std::cout << std::endl;
	trap1.attack("Flash");
	trap2.takeDamage(2);
	trap2.beRepaired(1);
	std::cout << std::endl;
	trap1.writeHp();
	trap1.writeEp();
	trap2.writeHp();
	trap2.writeEp();
	std::cout << std::endl;
	trap3.attack("Hulk");
	trap4.takeDamage(trap3.getAttackPoints());
	std::cout << std::endl;
	trap4.guardGate();
	std::cout << std::endl;

	return 0;
}