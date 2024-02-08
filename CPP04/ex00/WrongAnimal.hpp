/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:33:33 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/08 13:46:23 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

public:

	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal& animal);
	WrongAnimal& operator=(const WrongAnimal& animal);

	void makeSound() const;
	std::string getType() const;

protected:

	std::string _type;

};

#endif