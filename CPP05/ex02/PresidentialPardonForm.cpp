/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:41:49 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/13 20:37:27 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialRequestForm", 25, 5){
	_target = target;
}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form)
: AForm(form), _target(form._target){}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form){
	if(this != &form){
		AForm::operator=(form);
		this->_target = form._target;
	}
	return *this;
}

void PresidentialPardonForm::executeForm() const{
	std::cout << "Zaphod Beeblebrox pardons " << _target << std::endl;
}
