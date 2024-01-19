/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:57:31 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/19 10:26:15 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name ){
	Zombie** horde;
	int j = 0;

	for (int i = 0; i < N; i++){
		horde[i] = new Zombie(name + j);
		j++;
	}
	return horde*;
}