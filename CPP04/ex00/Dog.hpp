/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:49:37 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/28 22:21:20 by pcazac           ###   ########.fr       */
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

private:

	std::string _type;

};

#endif