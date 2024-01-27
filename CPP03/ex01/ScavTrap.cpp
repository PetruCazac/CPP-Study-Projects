/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:43:33 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/27 16:28:34 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default_scav is constructing." << std::endl;
	this->set_name("default_scav");
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_attack_points(20);
	this->guarding = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap " << name << " is constructing." << std::endl;
	this->set_name(name);
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_attack_points(20);
	this->guarding = false;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->_name << " is destroyed." << std::endl;}

ScavTrap::ScavTrap(const ScavTrap& scav) : ClapTrap(scav){
	std::cout << "ScavTrap " << scav._name << " is copying." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav){
	std::cout << "ScavTrap " << _name << " is using copy assignment operator." << std::endl;
	_name = scav._name;
	_hit_points = scav._hit_points;
	_energy_points = scav._energy_points;
	_attack_damage = scav._attack_damage;
	return *this;
}

void ScavTrap::attack(const std::string& target){
	if (this->_energy_points > 0 && this->_hit_points > 0){
		std::cout << this->_name << " is attacking " << target << " with " << this->_attack_damage
				<< " attack points" << std::endl;
		this->_energy_points--;
	}
	else {
		std::cout << "ScavTrap " << this->_name << " can't attack!" << std::endl;
	}
}

void ScavTrap::guardGate(){
	if(this->_hit_points > 0)
	{
		if(this->guarding && this->_energy_points > 0)
			std::cout << this->_name << " is already guarding the gate!" << std::endl;
		else if(!this->guarding && this->_energy_points < 0)
			std::cout << this->_name << " has no more energy and is tired." << std::endl;
		else if(!this->guarding && this->_energy_points > 0){
			std::cout << this->_name << " is now in guarding mode!" << std::endl;
			this->_energy_points--;
			this->guarding = true;
		}
	}
	else
		std::cout << this->_name << " is dead and can't do anyhting!" << std::endl;
}