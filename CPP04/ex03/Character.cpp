/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 08:22:50 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 16:00:34 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name){
	_name = name;
	_history_index = 0;
	for(int i = 0; i < 4; i++){
		_materia[i] = NULL;
		_materia_history[i] = NULL;
	}
}
Character::Character(const Character& character){
	_name = character._name;
	_history_index = 0;
	for(int i = 0; i < 4; i++){
		_materia[i] = NULL;
		_materia_history[i] = NULL;
	}
	*this = character;
}
Character& Character::operator=(const Character& character){
	if (this != &character){
	_name = character._name;
	_history_index = character._history_index;
	for(int i = 0; i < 4; i++){
		delete _materia[i];
		_materia[i] = NULL;
		_materia[i] = character._materia[i];
	}
	for(int i = 0; i < 10; i++){
		delete _materia_history[i];
		_materia_history[i] = NULL;
		_materia_history[i] = character._materia_history[i];
	}
	}
	return *this;
}
Character::~Character(){
	for(int i = 0; i < 4; i++)
	{
		if(_materia[i] != NULL)
			delete _materia[i];
	}
	for(int i = 0; i < 10; i++)
	{
		if(_materia_history[i] != NULL)
			delete _materia_history[i];
	}
}

std::string const & Character::getName() const {
	return _name;
}
void Character::equip(AMateria* m){
	if(m == NULL){
		std::cout << "Can't add an unitialised materia..." << std::endl;
		return ;
	}
	for(int i = 0; i < 4; i++){
		if(_materia[i] == NULL){
			_materia[i] = m;
			return ;
		}
	}
	std::cout << "Since all the spots are occupied I have to delete this matteria" << std::endl;
	delete m;
}
void Character::unequip(int idx){
	if (idx > 3){
		std::cout << "Wrong idex!" << std::endl;
		return ;
	}
	if (_materia[idx] == NULL){
		std::cout << "Can't unequip a non existing materia" << std::endl;
		return;
	}
	if(_history_index < 9){
		if(_materia_history[_history_index] != NULL){
			delete _materia_history[_history_index];
			_materia_history[_history_index] = NULL;
		}
		_materia_history[_history_index] = _materia[idx];
		_materia[idx] = NULL;
		_history_index++;
	} else {
		_history_index = 0;
		delete _materia_history[_history_index];
		_materia_history[_history_index] = _materia[idx];
		_materia[idx] = NULL;
		_history_index++;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx > 3){
		std::cout << "Wrong idex!" << std::endl;
		return ;
	}
	if (_materia[idx] != NULL){
		_materia[idx]->use(target);
		return;
	}
	std::cout << "Materia non existant" << std::endl;
}