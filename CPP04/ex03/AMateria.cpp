/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:37:19 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/05 12:50:40 by pcazac           ###   ########.fr       */
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

void AMateria::use(ICharacter& target){
	std::cout << "Is being a materia. Undefined stuff ." << target.getName() << " prints some nonsense *" << std::endl;
}
