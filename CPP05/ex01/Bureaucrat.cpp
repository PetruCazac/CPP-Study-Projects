/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:00:15 by pcazac            #+#    #+#             */
/*   Updated: 2024/03/14 19:40:52 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ================= Constructors =====================//

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

// ================= Getters =====================//

const std::string&	Bureaucrat::getName() const{
	return this->_name;
}
int			Bureaucrat::getGrade() const{
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

// ================= Action Functions =====================//

void	Bureaucrat::signForm(Form& sheet){
	if(sheet.getIfSigned() == true)
		std::cout << this->getName() << " already signed " << sheet.getName() << std::endl;
	else{
		try{
			sheet.beSigned(*this);
		}catch(std::exception& e){
			std::cout << e.what() << std::endl;
			std::cout << this->getName() << " countd't sign " << sheet.getName() << " because his tea is cold."<< std::endl;
			}
		}
}

// ================= Exceptions =====================//

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("The grade is too darn low!");
}
const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("The grade is too darn high!");
}
const char* Bureaucrat::FormNotSignedException::what() const throw(){
	return ("What do you bring me?? There are not enough signatures!");
}

// ================= Insertion operator =====================//

std::ostream& operator<<(std::ostream& out, Bureaucrat& guy){
	out << guy.getName() << ", bureaucrat grade " << guy.getGrade() << std::endl;
	return out;
}
