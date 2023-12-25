/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:44:12 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/24 19:28:31 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	PhoneBook::get_index()
{
	int i = this->_index;
	std::cout << _index << std::endl;
	set_index();
	return (i);
}

int	PhoneBook::get_older_index()
{
	int i = this->_older;
	return (i);
}

bool	PhoneBook::set_index(){
	if (_index < 7)
	{
		_index++;
		if (_loop == true)
		{
			_older = _index + 1;
			if (_older == 8)
				_older = 0;
		}
	}
	else
	{
		_index = 0;
		_loop = true;
	}
	return true;
}

bool	PhoneBook::new_contact(void){
	_contacts[get_index()].new_contact();
	return true;
}

PhoneBook::PhoneBook(void){
	_index = 0;
	_older = 0;
	_loop = false;
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}
