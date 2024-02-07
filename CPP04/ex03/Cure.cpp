/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:51:50 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 15:00:25 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
}
Cure::Cure(const Cure& cure) : AMateria(cure){

}
Cure& Cure::operator=(const Cure&){
	return *this;
}

Cure::~Cure(){}

Cure* Cure::clone() const {
	Cure* cure = new Cure();
	return cure;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
