/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/28 12:03:59 by pcazac           ###   ########.fr       */
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


	void write_hp();
	void write_ep();

	// Setter functions
	void set_name(std::string name);
	void set_hit_points(int i);
	void set_energy_points(int i);
	void set_attack_points(int i);

	// Getter functions
	std::string get_name(void);
	int get_hit_points(void);
	int get_energy_points(void);
	int get_attack_points(void);

protected:

	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

};

#endif