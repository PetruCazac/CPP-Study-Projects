/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:30 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/01 15:53:25 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_name = "The default trap";
	std::cout << "ClapTrap Assembler is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), 
			_energy_points(10), _attack_damage(0){
	std::cout << "Assembler is called" << std::endl;
			}
ClapTrap::~ClapTrap(){
	std::cout << "Disassembler is called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& trap){
	std::cout << "Copy constructor is called" << std::endl;
	_name = trap._name;
	_hit_points = trap._hit_points;
	_energy_points = trap._energy_points;
	_attack_damage = trap._attack_damage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& trap){
	std::cout << "Copy assignment operator is called" << std::endl;
	_name = trap._name;
	_hit_points = trap._hit_points;
	_energy_points = trap._energy_points;
	_attack_damage = trap._attack_damage;
	return *this;
}


void ClapTrap::attack(const std::string& target){
	if (this->_energy_points && this->_hit_points){
		std::cout << "ClapTrap " << this->_name << " attacks " << target
				<< " causing " << this->_attack_damage << " points of damage!" << std::endl;
				this->_energy_points--;}
	else  if(!this->_energy_points && this->_hit_points){
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy." << std::endl;}
	else  if(this->_energy_points && !this->_hit_points){
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;}
	else  if(!this->_energy_points && !this->_hit_points){
		std::cout << "ClapTrap " << this->_name << " just cant." << std::endl;}
}
void ClapTrap::takeDamage(unsigned int amount){
	
	if(!this->_hit_points){
		this->_hit_points = 0;
		std::cout << this->_name << " is already dead!" << std::endl;
		return;}
	if(this->_hit_points > 0){
		this->_hit_points -= amount;
		std::cout << this->_name << " is damaged by " << amount << " points and says \"Ouch!\"" << std::endl;}
	if(this->_hit_points < 0){
		this->_hit_points = 0;
		std::cout << this->_name << " is dead!" << std::endl;}
}
void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energy_points && this->_hit_points){
		this->_hit_points += amount;
		this->_energy_points--;
		std::cout << this->_name << " is repaired by " << amount << " points."<< std::endl;}
	else  if(!this->_energy_points && this->_hit_points){
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy." << std::endl;}
	else  if(this->_energy_points && !this->_hit_points){
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;}
	else  if(!this->_energy_points && !this->_hit_points){
		std::cout << "ClapTrap " << this->_name << " just cant." << std::endl;}
}

void ClapTrap::write_hp(){
	std::cout << this->_name << " has " << this->_hit_points << " hit points." << std::endl;
}
void ClapTrap::write_ep(){
	std::cout << this->_name << " has " << this->_energy_points << " energy points." << std::endl;
}