/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:02:10 by pcazac            #+#    #+#             */
/*   Updated: 2024/03/15 13:21:09 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern() {
	formFunc[0] = &Intern::makeShrubberyCreationForm;
	formFunc[1] = &Intern::makeRobotomyRequestForm;
	formFunc[2] = &Intern::makePresidentialPardonForm;
}
Intern::~Intern(){}
Intern::Intern(const Intern& kid ){
	(void) kid;
}
Intern& Intern::operator=(const Intern& kid){
	(void) kid;
	return *this;
}

AForm*	Intern::makeForm(const std::string& request, const std::string& target){
	std::string classes[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (size_t i = 0; i < 3; i++){
		if(!classes[i].compare(request)){
			return (this->*formFunc[i])(target);
		}
	}
	std::cout << "Intern couldn't find this form, he must make more coffee " << std::endl;
	std::cout << "The available choices are : shrubbery creation, robotomy request, presidential pardon." << std::endl;
	return NULL;
}

AForm*	Intern::makeShrubberyCreationForm(const std::string& str){
	std::cout << "Intern creates a Shrubbery Form." << std::endl;
	return new ShrubberyCreationForm(str);}
AForm*	Intern::makeRobotomyRequestForm(const std::string& str){
	std::cout << "Intern creates a Robotomy Request Form." << std::endl;
	return new RobotomyRequestForm(str);}
AForm*	Intern::makePresidentialPardonForm(const std::string& str){
	std::cout << "Intern creates a Presidential Pardon Form." << std::endl;
	return new PresidentialPardonForm(str);}