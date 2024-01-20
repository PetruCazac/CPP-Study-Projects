/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:09 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/20 23:40:16 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	int			nb_horde = 14;
	std::string	name = "Genghis";
	Zombie*		horde;
	
	horde = zombieHorde(nb_horde, name);
	for (int i = 0; i < nb_horde; i++){
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}
