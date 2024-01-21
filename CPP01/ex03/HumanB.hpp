/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:16:46 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/21 17:30:11 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB{

public:

	HumanB(std::string name);
	HumanB(std::string name, Weapon& new_weapon);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon& new_weapon);

private:

	std::string	_name;
	Weapon*	_weapon;

};

#endif