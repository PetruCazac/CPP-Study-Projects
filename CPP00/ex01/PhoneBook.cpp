/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:44:12 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/20 12:37:17 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

bool	PhoneBook::set_index(int i){
	_index = i;
	return true;
}

bool	PhoneBook::new_contact(void){
	_contacts[_index] = Contact();
}

PhoneBook::PhoneBook(void){
	set_index(0);
	set_older_index(0);
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}
