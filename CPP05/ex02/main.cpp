/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/13 17:00:59 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try{
		Bureaucrat guy1 = Bureaucrat("Dave", 149);
		Bureaucrat guy4 = Bureaucrat("Buck", 1);
		AForm doc1 = AForm("Form 0001", 10, 15);
		ShrubberyCreationForm bush = ShrubberyCreationForm("Bush");

		guy1.signForm(doc1);
		std::cout << guy1 << std::endl;
		std::cout << doc1 << std::endl;
		doc1.beSigned(guy4);
		guy4.signForm(doc1);
		guy1.decrementGrade();
		guy1.decrementGrade();
		guy4.incrementGrade();
	}
	catch (std::exception& e){
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	return 0;
}