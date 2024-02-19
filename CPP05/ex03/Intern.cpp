/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:02:10 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/19 16:02:13 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern& kid ){
	(void) kid;
}
Intern& Intern::operator=(const Intern& kid){
	(void) kid;
	return *this;
}
AForm*	Intern::makeForm(std::string request, std::string target){
	std::string classes[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;

	while(i < 3){
		if(!classes[i].compare(request))
			break;
		i++;
	}
	switch(i){
		case 0:
		{
			std::cout << "Intern creates a Shrubbery Form." << std::endl;
			return new ShrubberyCreationForm(target);
		}
		case 1:
		{
			std::cout << "Intern creates a Robotomy Request Form." << std::endl;
			return new RobotomyRequestForm(target);
		}
		case 2:
		{
			std::cout << "Intern creates a Presidential Pardon Form." << std::endl;
			return new PresidentialPardonForm(target);
		}
		default:
		{
			std::cout << "Intern couldn't find this form, he must make more coffee " << std::endl;
			std::cout << "The available choices are : shrubbery creation, robotomy request, presidential pardon." << std::endl;
		}
	}
	return NULL;
}
