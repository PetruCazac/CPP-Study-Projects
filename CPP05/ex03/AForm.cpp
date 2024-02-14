/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:02:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/14 14:42:08 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// ================= Constructors =====================//

AForm::AForm(std::string name, int sign_grade, int exec_grade) : _name(name), \
	_if_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooHighException();
	else if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooLowException();
}
AForm::~AForm(){}
AForm::AForm(const AForm& sheet) : _name(sheet.getName()), _if_signed(sheet.getIfSigned()), \
	_sign_grade(sheet.getSignedGrade()), _exec_grade(sheet.getExecGrade()){}
AForm& AForm::operator=(const AForm& sheet){
	if(this != &sheet)
		this->_if_signed = sheet.getIfSigned();
	return *this;
}

// ================= Getters =====================//

const std::string&	AForm::getName() const{
	return _name;
}
bool	AForm::getIfSigned() const{
	return _if_signed;
}
int		AForm::getSignedGrade() const{
	return _sign_grade;
}
int		AForm::getExecGrade() const{
	return _exec_grade;
}

// ================= Action Functions =====================//
void	AForm::setSigned(bool sign){
	_if_signed = sign;
}
void	AForm::beSigned(Bureaucrat& guy){
	if (guy.getGrade() <= this->getSignedGrade()){
		this->_if_signed = true;
	} else
		throw(GradeTooLowException());
}

void	AForm::execute(Bureaucrat const & executor) const{
	if(!this->getIfSigned()){
		throw(AForm::FormNotSignedException());
		return ;
	}
	if(this->getExecGrade() < executor.getGrade()){
		throw(AForm::GradeTooLowException());
		return ;
	}
	executeForm();
}

// ================= Exceptions =====================//

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade is too high";
}
const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}
const char* AForm::FormNotSignedException::what() const throw(){
	return ("What do you bring me?? There are not enough signatures!");
}

// ================= Insertion operator =====================//

std::ostream& operator<<(std::ostream& out, const AForm& sheet){
	out << "AForm name: " << sheet.getName() \
	<< "\nAForm signed: " << sheet.getIfSigned() \
	<< "\nAForm signed grade: " << sheet.getSignedGrade()\
	<< "\nAForm Exec Grade: " << sheet.getExecGrade() << std::endl;
	return out;
}