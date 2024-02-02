/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:56:05 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 11:00:28 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(){
	std::cout << "DiamondTrap default_diamond is constructing." << std::endl;
	_name = "default_diamond";
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	std::cout << "DiamondTrap " << name << " is constructing." << std::endl;
	DiamondTrap::_name = name;
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamond) : ClapTrap(diamond), ScavTrap(diamond), FragTrap(diamond){
	std::cout << "DiamondTrap " << diamond._name << " is copying." << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamond){
	std::cout << "DiamondTrap " << _name << " is using copy assignment operator." << std::endl;
	this->_name = diamond._name;
	this->_hit_points = diamond._hit_points;
	this->_energy_points = diamond._energy_points;
	this->_attack_damage = diamond._attack_damage;
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->_name << " is destroyed." << std::endl;}


void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI(){
	std::cout << "My DiamondTrap name is " << _name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::setName(std::string name){
	std::cout << "The " << _name << " changes it's name to " << name << std::endl;
	this->_name = name;
	ClapTrap::setName(name + "_clap_name");
}
