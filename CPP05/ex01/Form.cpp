/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:02:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/19 16:30:56 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ================= Constructors =====================//

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), \
	_if_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooHighException();
	else if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooLowException();
}
Form::~Form(){}
Form::Form(const Form& sheet) : _name(sheet.getName()), _if_signed(sheet.getIfSigned()), \
	_sign_grade(sheet.getSignedGrade()), _exec_grade(sheet.getExecGrade()){}
Form& Form::operator=(const Form& sheet){
	if(this != &sheet)
		this->_if_signed = sheet.getIfSigned();
	return *this;
}

// ================= Getters =====================//

const std::string&	Form::getName() const{
	return _name;
}
bool	Form::getIfSigned() const{
	return _if_signed;
}
int		Form::getSignedGrade() const{
	return _sign_grade;
}
int		Form::getExecGrade() const{
	return _exec_grade;
}

// ================= Action Functions =====================//
void	Form::setSigned(bool sign){
	_if_signed = sign;
}
void	Form::beSigned(Bureaucrat& guy){
	if (guy.getGrade() <= this->getSignedGrade()){
		this->_if_signed = true;
	} else
		throw(GradeTooLowException());
}

// ================= Exceptions =====================//

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade is too high";
}
const char* Form::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}
const char* Form::FormNotSignedException::what() const throw(){
	return ("What do you bring me?? There are not enough signatures!");
}

// ================= Insertion operator =====================//

std::ostream& operator<<(std::ostream& out, const Form& sheet){
	out << "Form name: " << sheet.getName() \
	<< "\nForm signed: " << sheet.getIfSigned() \
	<< "\nForm signed grade: " << sheet.getSignedGrade()\
	<< "\nForm Exec Grade: " << sheet.getExecGrade() << std::endl;
	return out;
}