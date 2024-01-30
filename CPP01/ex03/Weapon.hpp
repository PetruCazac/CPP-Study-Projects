/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:09:44 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/30 15:26:57 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon{

public:

	Weapon();
	Weapon(std::string weapon);
	~Weapon();

	void				setType(std::string new_type);
	const std::string&	getType();

private:

	std::string	_type;

};

#endif