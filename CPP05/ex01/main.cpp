/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/19 16:31:08 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat guy1 = Bureaucrat("Dave", 149);
		Bureaucrat guy4 = Bureaucrat("Buck", 1);
		Form doc1 = Form("Form 0001", 10, 15);
	
		guy1.signForm(doc1);
		std::cout << guy1 << std::endl;
		std::cout << doc1 << std::endl;
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