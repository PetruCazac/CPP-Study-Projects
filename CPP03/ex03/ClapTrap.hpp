/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 11:03:02 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap {

public:

	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& trap);
	ClapTrap&	operator=(const ClapTrap& trap);


	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);


	void writeHp();
	void writeEp();

	// Setter functions
	void setName(std::string name);
	void setHitPoints(int i);
	void setEnergyPoints(int i);
	void setAttackPoints(int i);

	// Getter functions
	std::string getName(void);
	int getHitPoints(void);
	int getEneryPoints(void);
	int getAttackPoints(void);

protected:

	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

};

#endif