/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:41:52 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/20 09:52:49 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

std::string Contact::set_first_name(void){
	std::string name;

	std::cout << "First name:";
	std::getline(std::cin, name);
	return name;
	
}

Contact::Contact(void){
	this->first_name = set_first_name();
	std::cout << "The name is :" << this->first_name << std::endl;
	return;
}

Contact::~Contact(void){
	return;
}

// bool set_last_name(void){
// }
// bool set_nickname(void){
// }
// bool set_secret(void){
// }
// bool set_phone(void){
// }