/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:00:15 by pcazac            #+#    #+#             */
/*   Updated: 2024/03/09 18:41:18 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int i) : _name(name) {
	if (i > 150)
		throw GradeTooHighException();
	else if (i < 1)
		throw GradeTooLowException();
	else
		_grade = i;
}
Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat& guy){
	*this = guy;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& guy){
	this->_grade = guy._grade;
	return *this;
}

std::string	Bureaucrat::getName(){
	return this->_name;
}

int			Bureaucrat::getGrade(){
	return this->_grade;
}

void		Bureaucrat::incrementGrade(){
	if (this->_grade == 1)
		throw (GradeTooHighException());
	else
		this->_grade--;
}

void		Bureaucrat::decrementGrade(){
	if (this->_grade == 150)
		throw (GradeTooLowException());
	else
		this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("The grade is too darn low!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("The grade is too darn high!");
}


std::ostream& operator<<(std::ostream& out, Bureaucrat& guy){
	out << guy.getName() << ", bureaucrat grade " << guy.getGrade() << std::endl;
	return out;
}
