/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:18:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 15:00:10 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
}
Ice::Ice(const Ice& ice) : AMateria(ice){
}
Ice& Ice::operator=(const Ice&){
	return *this;
}
Ice::~Ice(){}

Ice* Ice::clone() const {
	Ice* ice = new Ice();
	return ice;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
