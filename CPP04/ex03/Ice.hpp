/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:33:38 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/04 15:49:59 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria{
protected:

public:

	Ice(std::string const & type);
	Ice(const Ice& Ice);
	Ice& operator=(const Ice& Ice);
	~Ice();

	Ice* clone() const = 0;
	void use(ICharacter& target);

};

#endif
