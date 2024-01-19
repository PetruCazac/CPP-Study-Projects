/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:09 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/19 09:45:56 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie* strawHeapZombie;

	strawHeapZombie = newZombie("Heappie Zombie");
	std::cout << "A heap zombie enters the chat" << std::endl;
	strawHeapZombie->announce();
	delete strawHeapZombie;
	std::cout << "A random chump enters the chat" << std::endl;
	randomChump("Zombie Chump");
	return 0;
}