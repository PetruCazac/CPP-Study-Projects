/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/14 15:02:20 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void testShrubbery(void){
	ShrubberyCreationForm bush("Bush");
	Bureaucrat dave1("Dave", 2);
	Bureaucrat dave2("Matt", 50);
	Bureaucrat dave3("Butch", 150);
	
	std::cout << "======================Shrubbery Test==================\n";
	dave1.signForm(bush);
	dave1.executeForm(bush);
	bush.setSigned(false);
	
	dave2.signForm(bush);
	dave2.executeForm(bush);
	bush.setSigned(false);
	
	dave3.signForm(bush);
	dave3.executeForm(bush);
	std::cout << "=================================================================\n\n";
}

void testRobotomy(void){
	RobotomyRequestForm bush("Bush Robot");
	Bureaucrat dave1("Dave", 2);
	Bureaucrat dave2("Matt", 50);
	
	std::cout << "======================Robotomy Test==================\n";
	dave1.signForm(bush);
	dave1.executeForm(bush);
	dave1.executeForm(bush);
	dave1.executeForm(bush);
	dave1.executeForm(bush);
	dave1.executeForm(bush);
	bush.setSigned(false);
	
	dave2.signForm(bush);
	dave2.executeForm(bush);
	std::cout << "=================================================================\n\n";
}

void testPresidentialPardon(void){
	PresidentialPardonForm bush("Snowden");
	Bureaucrat pres1("Zapo", 2);
	Bureaucrat pres2("Zorg", 50);
	std::cout << "======================Presidential Pardon Test==================\n";
	pres1.signForm(bush);
	pres1.executeForm(bush);
	bush.setSigned(false);
	
	pres2.signForm(bush);
	pres2.executeForm(bush);
	std::cout << "=================================================================\n\n";
}

int main()
{
	testShrubbery();
	testPresidentialPardon();
	testRobotomy();
	return 0;
}