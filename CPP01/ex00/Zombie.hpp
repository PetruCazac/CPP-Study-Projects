/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:21 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/30 14:50:02 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {

public:

	Zombie(std::string name);
	~Zombie(void);

private:

	void	announce( void );
	const std::string	_name;

};

Zombie*	newZombie( std::string name );

void	randomChump( std::string name );

#endif