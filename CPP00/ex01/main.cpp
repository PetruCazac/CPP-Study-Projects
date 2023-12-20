/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:49:06 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/20 10:41:56 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(int argc, char **argv){
	std::string command;
	PhoneBook book;
	
	
	if (argc != 1){
		std::cout<< "Wrong call!" << std::endl;
		return 0;
	}
	std::cout << "|------------------------------------------------|"<< std::endl;
	std::cout << "|          Welcome to your Phonebook             |"<< std::endl;
	std::cout << "|          You Have Following Commands           |"<< std::endl;
	std::cout << "|------------------------------------------------|"<< std::endl;
	std::cout << "|     ADD     |      SEARCH       |     EXIT     |"<< std::endl;
	std::cout << "|------------------------------------------------|"<< std::endl;
	std::cout << "|            What do you want to do?             |"<< std::endl;
	std::cout << "|------------------------------------------------|"<< std::endl;
	while (command.compare("EXIT") == 0)
	{
		std::cout << "|------------------------------------------------|"<< std::endl;
		std::cout << "|          You Have Following Commands           |"<< std::endl;
		std::cout << "|------------------------------------------------|"<< std::endl;
		std::cout << "|     ADD     |      SEARCH       |     EXIT     |"<< std::endl;
		std::cout << "|------------------------------------------------|"<< std::endl;
		std::cout << "|            What do you want to do?             |"<< std::endl;
		std::cout << "|------------------------------------------------|"<< std::endl;
		std::getline (std::cin, command);
		if (command.compare("ADD"))
			book.new_contact();
	}
}
