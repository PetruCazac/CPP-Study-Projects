/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:41:52 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/25 18:43:08 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

bool Contact::new_contact()
{
	_first_name = this->get_string("What's the first name:");
	_last_name = this->get_string("What's the last name:");
	_nickname = this->get_string("What's the nickname:");
	_secret = this->get_string("What's the darkest secret:");
	_phone_nbr = this->get_string("What's the phone:");
	return (true);
}

std::string Contact::get_string(std::string str){
	std::string name;

	std::cout << str;
	std::getline(std::cin, name);
	return name;
}

std::string Contact::get_first_name(void)
{
	return _first_name;
}

std::string Contact::get_last_name(void)
{
	return _last_name;
}

std::string Contact::get_nickname(void)
{
	return _nickname;
}

std::string Contact::get_secret(void)
{
	return _secret;
}

std::string Contact::get_phone(void)
{
	return _phone_nbr;
}

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	return;
}
