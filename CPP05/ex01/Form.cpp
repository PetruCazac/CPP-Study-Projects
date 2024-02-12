/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:02:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/12 18:13:04 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), \
						_sign_grade(sign_grade), _exec_grade(exec_grade){}

Form::~Form(){}

Form::Form(const Form& sheet){
	*this = sheet;
}
Form& Form::operator=(const Form& sheet){
	this->_name = sheet.getName();
	this->_sign_grade = sheet.getSignedGrade();
	this->_exec_grade = sheet.getExecGrade();
	this->_if_signed = sheet.getIfSigned();
	return *this;
}

const std::string&	Form::getName(){
	return _name;
}
bool	Form::getIfSigned(){
	return _if_signed;
}

const int		Form::getSignedGrade(){
	return _sign_grade;
}
const int		Form::getExecGrade(){
	return _exec_grade;
}
void	Form::beSigned(Bureaucrat& guy){
	
}
void	Form::signForm(Bureaucrat& guy){
	
}

std::ostream* operator<<(std::ostream* out, const Form& sheet){
	
}
