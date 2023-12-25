/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:41:52 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/25 13:41:41 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

bool Contact::new_contact()
{
	_first_name = this->get_first_name();
	_last_name = this->get_last_name();
	_nickname = this->get_nickname();
	_secret = this->get_secret();
	_phone_nbr = this->get_phone();
	return (true);
}

std::string Contact::get_first_name(void){
	std::string name;

	std::cout << "What's the first name:";
	std::getline(std::cin, name);
	return name;
}

std::string Contact::get_last_name(void){
	std::string name;

	std::cout << "What's the last name:";
	std::getline(std::cin, name);
	return name;
}

std::string Contact::get_nickname(void){
	std::string name;

	std::cout << "What's the nickname:";
	std::getline(std::cin, name);
	return name;
}

std::string Contact::get_secret(void){
	std::string name;

	std::cout << "What's the secret:";
	std::getline(std::cin, name);
	return name;
}

std::string Contact::get_phone(void){
	std::string name;

	std::cout << "What's the phone:";
	std::getline(std::cin, name);
	return name;
}

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	return;
}
