/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:49:37 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/08 13:47:42 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:

	Dog();
	~Dog();
	Dog(const Dog& animal);
	Dog& operator=(const Dog& animal);

	std::string* getStringAddress(int i) const;
	std::string getString(int i) const;
	void	setString(std::string dog_idea, int i);

private:
	Brain*		_dog_brain;
	void makeSound() const;
	std::string getType() const;
};

#endif