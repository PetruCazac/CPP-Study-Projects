/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:19:32 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/19 15:58:05 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", 25, 5){
	_target = target;
}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form)
: AForm(form), _target(form._target){}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& form){
	if(this != &form){
		AForm::operator=(form);
		this->_target = form._target;
	}
	return *this;
}

void RobotomyRequestForm::executeForm() const {
	std::srand(std::time(NULL));
	if ( std::rand() % 2 == 1)
		std::cout << "Beep boop! Whirr whirr! Beep beep! " << _target  << " has been Robotomized." << std::endl;
	else
		std::cout << "Beep boop! Whirr whirr! Beep beep! " << "FAILURE!" << std::endl;
}
