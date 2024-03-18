/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:12:19 by pcazac            #+#    #+#             */
/*   Updated: 2024/03/15 13:15:02 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern {
public:
	Intern();
	~Intern();
	Intern(const Intern& kid);
	Intern& operator=(const Intern& kid);
	AForm*	makeForm(const std::string& request, const std::string& target);
	AForm*	makeShrubberyCreationForm(const std::string& str);
	AForm*	makeRobotomyRequestForm(const std::string& str);
	AForm*	makePresidentialPardonForm(const std::string& str);
private:
	AForm*	(Intern::*formFunc[3])(const std::string&);
};

#endif