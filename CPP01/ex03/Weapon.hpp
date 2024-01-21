/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:09:44 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/21 16:09:08 by pcazac           ###   ########.fr       */
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

	const std::string&	getType();
	void				setType(std::string new_type);

private:

	std::string	_type;

};

#endif