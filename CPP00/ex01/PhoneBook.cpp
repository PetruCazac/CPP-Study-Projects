/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:44:12 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/27 16:27:33 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	PhoneBook::get_index(){
	int i = this->_index;
	set_index();
	return (i);
}

std::string PhoneBook::get_contacts(void){
	std::string str = std::to_string(this->_max + 1);
	return str;
}

bool	PhoneBook::set_index(){
	if (_index < 7)
	{
		_index++;
		if (_max < 8)
			_max++;
	}
	else
		_index = 0;
	return true;
}

std::string	PhoneBook::output_str(std::string str){
	if (str.length() >= 10)
		return str.substr(0, 9) + ".";
	else
		return std::string(10 - str.length(), ' ') + str;
}

bool	PhoneBook::new_contact(void){
	_contacts[get_index()].new_contact();
	return true;
}

bool	PhoneBook::search_contact(void){
	int i = 0;
	std::string numb;
	while (_contacts[i].get_first_name().length() != 0)
	{
		std::cout << "| " << i + 1 << " | " <<
			output_str(_contacts[i].get_first_name()) << " | " <<
			output_str(_contacts[i].get_last_name()) << " | " <<
			output_str(_contacts[i].get_nickname()) << std::endl;
		i++;
	}
	std::cout << "Write the contact index: ";
	std::getline( std::cin, numb);
	while (numb.length() != 1 || (numb[0] < '1' || numb[0] > '8') || numb.compare(get_contacts()) > 0)
	{
		std::cout << "Wrong input, try again: ";
		std::getline( std::cin, numb);
		if (!numb.compare("EXIT"))
			return false;
	}
	i = std::stoi(numb) - 1;
	std::cout << "| " << _contacts[i].get_first_name() << " |" << std::endl;
	std::cout << "| " << _contacts[i].get_last_name() << " |" << std::endl;
	std::cout << "| " << _contacts[i].get_nickname() << " |" << std::endl;
	std::cout << "| " << _contacts[i].get_secret() << " |" << std::endl;
	std::cout << "| " << _contacts[i].get_phone() << " |" << std::endl;
		return true;
}

PhoneBook::PhoneBook(void){
	_index = 0;
	_max = 0;
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}