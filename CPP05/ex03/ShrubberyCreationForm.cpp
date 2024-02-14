/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:30:07 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/14 14:54:13 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :\
	AForm("Shubbery", 145, 137), _target(target)
{}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form) :
	AForm(form), _target(form._target){}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
	if(this != &form){
		AForm::operator=(form);
		this->_target = form._target;
	}
	return *this;
}

void ShrubberyCreationForm::executeForm() const {
	try{
		std::fstream file;
		file.open(_target + "_shrubbery", std::fstream::out);
		file << "               ,@@@@@@@,		\n" <<
				"       ,,,.   ,@@@@@@/@@,  .oo8888o.			\n" << 
				"    ,&%\\%&%&&%,@@@@@/@@@@@@,8888\\88/8o			\n" <<
				"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'			\n" <<
				"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'			\n" <<
				"   %&&%/ %&%\\%&&@@\\ V /@@' `88\\8 `/88'			\n" <<
				"   `&%\\ ` /%&'    |.|        \\ '|8'			\n" <<
				"       |o|        | |         | |				\n" <<
				"       |.|        | |         | |				\n" <<
				"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_		\n" << std::endl;
	}catch(std::exception& e){
		std::cout << "Error upon opening file:" << e.what() << std::endl;
	}

}