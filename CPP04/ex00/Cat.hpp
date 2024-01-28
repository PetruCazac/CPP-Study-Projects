/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:49:35 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/28 22:27:14 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

public:

	Cat();
	~Cat();
	Cat(const Cat& animal);
	Cat& operator=(const Cat& animal);

	void makeSound() const;
	std::string getType() const;

private:

	std::string _type;

};

#endif