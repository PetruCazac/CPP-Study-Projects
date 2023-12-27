/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:49:06 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/25 18:25:18 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(){
	std::string	command;
	
	std::cout << "|------------------------------------------------|"<< std::endl;
	std::cout << "|          Welcome to your Phonebook             |"<< std::endl;
	std::cout << "|          You Have Following Commands           |"<< std::endl;
	std::cout << "|------------------------------------------------|"<< std::endl;
	std::cout << "|     ADD     |      SEARCH       |     EXIT     |"<< std::endl;
	std::cout << "|------------------------------------------------|"<< std::endl;
	std::cout << "|            What do you want to do?             |"<< std::endl;
	std::cout << "|------------------------------------------------|"<< std::endl;
	PhoneBook	book;
	while (command.compare("EXIT"))
	{
		std::getline (std::cin, command);
		if (!command.compare("ADD"))
			book.new_contact();
		if (!command.compare("SEARCH"))
			book.search_contact();
		if (!command.compare("EXIT"))
			break;
		std::cout << "|------------------------------------------------|"<< std::endl;
		std::cout << "|          You Have Following Commands           |"<< std::endl;
		std::cout << "|------------------------------------------------|"<< std::endl;
		std::cout << "|     ADD     |      SEARCH       |     EXIT     |"<< std::endl;
		std::cout << "|------------------------------------------------|"<< std::endl;
		std::cout << "|            What do you want to do?             |"<< std::endl;
		std::cout << "|------------------------------------------------|"<< std::endl;
	}
		std::cout << "|------------------------------------------------|"<< std::endl;
		std::cout << "|                   Goodbye                      |"<< std::endl;
		std::cout << "|------------------------------------------------|"<< std::endl;
	return 0;
} 
