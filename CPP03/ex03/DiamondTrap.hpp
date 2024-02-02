/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:56:03 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 14:55:49 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{

public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& diamond);
	DiamondTrap& operator=(const DiamondTrap& diamond);
	~DiamondTrap();

	void attack(const std::string& target);
	void setName(std::string name);
	void whoAmI();

private:
	std::string _name;

};

#endif