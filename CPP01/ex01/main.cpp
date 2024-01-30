/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:09 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/30 15:18:06 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	int			nb_horde = 14;
	std::string	name = "Genghis";
	Zombie*		horde;
	
	horde = zombieHorde(nb_horde, name);
	for (int i = 0; i < nb_horde; i++){
		std::cout << i + 1 << " ";
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}
