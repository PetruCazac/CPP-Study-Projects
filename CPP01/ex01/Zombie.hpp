/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:21 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/20 23:39:39 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {

public:

	Zombie();
	~Zombie(void);
	void	announce( void );
	void	set_name(std::string name);

private:

	std::string	_name;

};

Zombie*	zombieHorde( int N, std::string name );

#endif