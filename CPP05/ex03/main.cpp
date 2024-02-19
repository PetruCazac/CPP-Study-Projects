/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/19 15:59:37 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void testIntern(void){
	Bureaucrat	pres1("Chad", 2);
	std::cout << "======================Intern Test==================\n";
	Intern		kid = Intern();

	AForm* some_form = kid.makeForm("shrubbery creation", "Bush");
	pres1.signForm(*some_form);
	pres1.executeForm(*some_form);
	delete some_form;
	AForm* some_form1 = kid.makeForm("robotomy request", "Roro");
	pres1.signForm(*some_form1);
	pres1.executeForm(*some_form1);
	delete some_form1;
	AForm* some_form2 = kid.makeForm("presidential pardon", "Regan");
	pres1.signForm(*some_form2);
	pres1.executeForm(*some_form2);
	delete some_form2;
	std::cout << "=================================================================\n\n";
}

int main()
{
	testIntern();
	return 0;
}