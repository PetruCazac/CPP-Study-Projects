/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:51:50 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/05 13:05:22 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
}
Cure::Cure(std::string const & type) : AMateria("cure"){
}
Cure::Cure(const Cure& cure) : AMateria(cure){
}
Cure& Cure::operator=(const Cure& cure){
	*this = cure;
}
Cure::~Cure(){}

Cure* Cure::clone() const {
	std::string const & name = "cure";
	Cure* cure = new Cure(name);
	return cure;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
