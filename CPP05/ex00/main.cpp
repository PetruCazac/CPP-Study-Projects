/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/18 12:05:02 by pcazac           ###   ########.fr       */
=======
/*   Updated: 2024/03/14 19:38:56 by pcazac           ###   ########.fr       */
>>>>>>> 43063bb5e331d71c7edab5124fd50f740a1a61d9
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat guy1 = Bureaucrat("Dave", 149);
	Bureaucrat guy4 = Bureaucrat("Buck", 1);
	try{
	Bureaucrat guy2 = Bureaucrat("Matt", 151);
	Bureaucrat guy3 = Bureaucrat("Chip", 0);
	}
	catch (std::exception& e){
		std::cout << "ERROR " << e.what() << std::endl;
	}
	try{
		guy1.decrementGrade();
		guy1.decrementGrade();
	}
	catch( std::exception& e){
		std::cout << "Error occured:" << e.what() << std::endl;
	}
	std::cout << guy1 << std::endl;
	try{
		guy4.incrementGrade();
	}
	catch( std::exception& e){
		std::cout << "Error occured:" << e.what() << std::endl;
	}
	return 0;
}