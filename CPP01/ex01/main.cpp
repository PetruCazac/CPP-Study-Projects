/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:09 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/19 10:32:48 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	int			nb_horde = 14;
	std::string	name = "Genghis";
	Zombie** 	horde = new Zombie*[14];

	horde[0] = zombieHorde(nb_horde, name);
	for (int i = 0; i < nb_horde; i++){
		horde[i]->announce();
	}
	for (int i = 0; i < nb_horde; i++){
		delete horde[i];
	}
	delete horde;
	return 0;
}
