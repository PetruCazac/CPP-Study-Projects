/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:52:40 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 11:01:37 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << "FragTrap default_frag is constructing." << std::endl;
	this->setName("default_frag");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackPoints(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap " << name << " is constructing." << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackPoints(30);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " is destroyed." << std::endl;}

FragTrap::FragTrap(const FragTrap& frag) : ClapTrap(frag){
	std::cout << "FragTrap " << frag._name << " is copying." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& frag){
	std::cout << "FragTrap " << _name << " is using copy assignment operator." << std::endl;
	ClapTrap::operator=(frag);
	return *this;
}

void FragTrap::highFivesGuys(void){
	if(this->_hit_points > 0 && this->_energy_points > 0)
		std::cout << this->_name << " high fives the guys!" << std::endl;
	else
		std::cout << this->_name << " can't high five anyone..." << std::endl;
}
