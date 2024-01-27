/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/27 15:04:14 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(){
	ClapTrap	trap1("Batman");
	ClapTrap	trap2("Flash");
	ScavTrap	trap3("Superman");
	ScavTrap	trap4("Hulk");

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
	return 0;
}