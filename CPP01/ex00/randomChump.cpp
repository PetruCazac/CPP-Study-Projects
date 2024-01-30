/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:04:59 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/30 11:47:29 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name ){
	Zombie	stackie = Zombie(name);
	std::cout << "A random chump enters the chat" << std::endl;
	stackie.announce();
	return ;
}
// It creates a zombie, name it, and the zombie announces itself.