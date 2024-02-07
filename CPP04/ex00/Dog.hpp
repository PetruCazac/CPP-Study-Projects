/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:49:37 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 17:40:47 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {

public:

	Dog();
	~Dog();
	Dog(const Dog& animal);
	Dog& operator=(const Dog& animal);

	void makeSound() const;
	std::string getType() const;

};

#endif