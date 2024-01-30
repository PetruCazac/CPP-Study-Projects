/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:33:38 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/28 22:39:28 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& animal);
	WrongCat& operator=(const WrongCat& animal);

	void makeSound() const;
	std::string getType() const;

private:

	std::string _type;

};

#endif