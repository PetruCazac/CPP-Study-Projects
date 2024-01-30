/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:49:35 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/29 22:58:28 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:

	Cat();
	~Cat();
	Cat(const Cat& animal);
	Cat& operator=(const Cat& animal);

	// Getter functions
	void makeSound() const;
	std::string getType() const;
	std::string getString(int i) const;
	std::string* getStringAddress(int i) const;
	// Setter functions
	void		setString(std::string cat_idea, int i);

private:

	std::string _type;
	Brain* _cat_brain;
};

#endif