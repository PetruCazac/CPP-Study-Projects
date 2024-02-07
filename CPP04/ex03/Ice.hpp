/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:33:38 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 14:58:51 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria{

public:

	Ice();
	Ice(std::string const & type);
	Ice(const Ice& Ice);
	Ice& operator=(const Ice&);
	~Ice();

	Ice* clone() const;
	void use(ICharacter& target);
};

#endif
