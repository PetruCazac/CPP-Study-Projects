/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 10:59:42 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap	trap1("Batman");
	ClapTrap	trap2("Flash");

	trap1.attack("Flash");
	trap2.takeDamage(2);
	trap2.beRepaired(1);
	trap1.writeHp();
	trap1.writeEp();
	trap2.writeHp();
	trap2.writeEp();
	return 0;
}