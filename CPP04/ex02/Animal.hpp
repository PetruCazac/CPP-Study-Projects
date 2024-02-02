/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:41:08 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 08:53:33 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

public:

	Animal();
	virtual ~Animal() = 0;
	Animal(const Animal& animal);
	Animal& operator=(const Animal& animal);
	

private:

	virtual void makeSound() const;
	virtual std::string getType() const;
	std::string _type;

};

#endif