/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:30 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 11:03:02 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_name = "default_clap";
	std::cout << "ClapTrap " << _name << " assembler is called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), 
			_energy_points(10), _attack_damage(0){
	std::cout << "ClapTrap " << _name << " assembler is called" << std::endl;
			}
ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << _name << " Disassembler is called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& trap){
	std::cout << "ClapTrap " << trap._name << "copy constructor is called" << std::endl;
	_name = trap._name;
	_hit_points = trap._hit_points;
	_energy_points = trap._energy_points;
	_attack_damage = trap._attack_damage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& trap){
	std::cout << "ClapTrap " << trap._name << " copy assignment operator is called" << std::endl;
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

void ClapTrap::writeHp(){
	std::cout << this->_name << " has " << this->_hit_points << " hit points." << std::endl;
}
void ClapTrap::writeEp(){
	std::cout << this->_name << " has " << this->_energy_points << " energy points." << std::endl;
}

// Setter functions
void ClapTrap::setName(std::string name){this->_name = name;}
void ClapTrap::setHitPoints(int i){this->_hit_points = i;}
void ClapTrap::setEnergyPoints(int i){this->_energy_points = i;}
void ClapTrap::setAttackPoints(int i){this->_attack_damage = i;}

// Getter functions
std::string ClapTrap::getName(void){return _name;}
int ClapTrap::getHitPoints(void){return _hit_points;}
int ClapTrap::getEneryPoints(void){return _energy_points;}
int ClapTrap::getAttackPoints(void){return _attack_damage;}