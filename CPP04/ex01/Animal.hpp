/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:41:08 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 17:43:35 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

public:

	Animal();
	virtual ~Animal();
	Animal(const Animal& animal);
	Animal& operator=(const Animal& animal);


protected:

	virtual void makeSound() const;
	virtual std::string getType() const;
	std::string _type;

};

#endif