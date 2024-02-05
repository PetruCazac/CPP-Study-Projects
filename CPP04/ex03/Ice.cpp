/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:18:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/05 14:19:57 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
}
Ice::Ice(std::string const & type) : AMateria("ice"){
}
Ice::Ice(const Ice& ice) : AMateria(ice){
}
Ice& Ice::operator=(const Ice& ice){
	*this = ice;
}
Ice::~Ice(){}

Ice* Ice::clone() const {
	std::string const & name = "ice";
	Ice* ice = new Ice(name);
	return ice;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
