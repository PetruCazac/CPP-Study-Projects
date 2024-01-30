/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 07:47:52 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/29 18:33:33 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain class default constructor called." << std::endl;
}
Brain::~Brain(){
	std::cout << "Brain class default constructor called." << std::endl;
}
Brain::Brain(const Brain& brain){
	std::cout << "Brain class copy constructor called." << std::endl;
	for(int i = 0; i < 100; i++){
		this->_ideas[i] =  brain._ideas[i];
	}
}

Brain&	Brain::operator=(const Brain& brain){
	std::cout << "Brain class copy assignment operator called." << std::endl;
	for(int i = 0; i < 100; i++){
		this->_ideas[i] =  brain._ideas[i];
	}
	return *this;
}