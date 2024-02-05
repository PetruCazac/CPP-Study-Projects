/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:22:00 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/05 13:05:10 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
protected:

public:

	Cure();
	Cure(std::string const & type);
	Cure(const Cure& Cure);
	Cure& operator=(const Cure& Cure);
	~Cure();

	Cure* clone() const = 0;
	void use(ICharacter& target);
};

#endif
