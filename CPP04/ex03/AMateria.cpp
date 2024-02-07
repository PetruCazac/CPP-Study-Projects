/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:37:19 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 14:12:58 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
}
AMateria::AMateria(const AMateria& amateria){
	*this = amateria;
}
AMateria& AMateria::operator=(const AMateria& amateria){
	_type = amateria._type;
	return *this;
}
AMateria::~AMateria(){}

std::string const & AMateria::getType() const {
	return _type;
} //Returns the materia type

void AMateria::use(ICharacter&){
	std::cout << "Is being a materia. Undefined stuff . prints some nonsense *" << std::endl;
}
