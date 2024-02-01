/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 07:47:54 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/01 22:51:35 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

public:
	Brain();
	~Brain();
	Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);
	
	static const int	_nbIdeas = 100;
	std::string			_ideas[_nbIdeas];
};

#endif