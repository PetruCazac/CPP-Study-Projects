/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:21 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 11:00:28 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {

public:

	Zombie();
	Zombie(std::string name);
	~Zombie(void);
	void	announce( void );
	void	setName(std::string name);

private:

	std::string	_name;

};

Zombie*	zombieHorde( int N, std::string name );

#endif