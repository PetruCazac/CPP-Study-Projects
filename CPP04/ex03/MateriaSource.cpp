/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:29:08 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 15:24:24 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		_materia_source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& materia){
	*this = materia;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materia){
	if (this == &materia)
		return *this;
	for (int i = 0; i < 4; i++){
		if (_materia_source[i] != NULL){
			delete _materia_source[i];
			_materia_source[i] = NULL;
		}
		if (materia._materia_source[i] != NULL)
			_materia_source[i] = materia._materia_source[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		if (_materia_source[i] != NULL)
			delete _materia_source[i];
	}
}

void MateriaSource::learnMateria(AMateria* new_materia){
	if (new_materia == NULL){
		std::cout << "Error: Can't learn a non existant materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++){
		if (_materia_source[i] == NULL){
			_materia_source[i] = new_materia;
			return;
		}
	}
	std::cout << "Error: No available slots for materia, the new materia will be deleted." << std::endl;
	delete new_materia;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4; i++){
		if(_materia_source[i]->getType() == type)
			return _materia_source[i]->clone();
	}
	std::cout << "Error: Type not found" << std::endl;
	return NULL;
}