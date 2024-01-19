/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:21 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/19 10:17:54 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {

public:

	Zombie(std::string name);
	~Zombie(void);
	void	announce( void );

private:

	const std::string	_name;

};

Zombie*	zombieHorde( int N, std::string name );

#endif