/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:09 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/30 11:47:21 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie* strawHeapZombie;

	strawHeapZombie = newZombie("Heappie Zombie");
	std::cout << "A heap zombie enters the chat" << std::endl;
	strawHeapZombie->announce();
	delete strawHeapZombie;
	randomChump("Zombie Chump");
	return 0;
}