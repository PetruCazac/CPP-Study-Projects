/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/28 15:10:23 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(){
	ClapTrap	trap1("Batman");
	ClapTrap	trap2("Flash");
	
	ScavTrap	trap3("Superman");
	ScavTrap	trap4("Hulk");
	
	FragTrap	trap5("Aquaman");
	FragTrap	trap6;

	trap1.attack("Flash");
	trap2.takeDamage(2);
	trap2.beRepaired(1);
	trap1.write_hp();
	trap1.write_ep();
	trap2.write_hp();
	trap2.write_ep();
	trap3.attack("Hulk");
	trap4.takeDamage(trap3.get_attack_points());
	trap4.guardGate();
	trap6.set_name("Spiderman");
	trap5.attack("Spiderman");
	trap6.takeDamage(trap5.get_attack_points());
	trap6.highFivesGuys();
	trap5.attack("Spiderman");
	trap6.takeDamage(trap5.get_attack_points());
	trap5.attack("Spiderman");
	trap6.takeDamage(trap5.get_attack_points());
	trap5.attack("Spiderman");
	trap6.takeDamage(trap5.get_attack_points());
	trap6.highFivesGuys();
	trap3.attack("Batman");
	trap1.takeDamage(trap3.get_attack_points());
	trap1.beRepaired(10);
	std::cout << std::endl;
	std::cout << std::endl;

	DiamondTrap trap7;
	std::cout << std::endl;
	DiamondTrap trap8("Scrudge");
	std::cout << std::endl;
	trap7.set_name("Thor");
	std::cout << std::endl;
	trap8.attack("Thor");
	std::cout << std::endl;
	trap7.takeDamage(trap8.get_attack_points());
	std::cout << std::endl;
	trap7.whoAmI();
	std::cout << std::endl;
	trap8.whoAmI();
	std::cout << std::endl;
	return 0;
}