/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:57:31 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 11:00:28 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	std::cout << "Creating the horde!" << std::endl;
	Zombie* horde = new Zombie[N];

	std::cout << "Giving the name to the horde!" << std::endl;
	for (int i = 0; i < N; i++){
		std::cout << i + 1 << " ";
		horde[i].setName(name);
	}
	return horde;
}