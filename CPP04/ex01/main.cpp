/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/29 23:13:12 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <sstream>

std::string to_string(int i){

	std::stringstream stream;
	stream << i;
	return stream.str();
}

void	big_quantity(){
	int		size = 10;
	Animal* animals[size];

	// Creating the classes
	for(int i = 0; i < size / 2; i++){
		animals[i] = new Cat();
	}
	for(int i = size / 2; i < size; i++){
		animals[i] = new Dog();
	}

	// Deleting the classes
	for(int i = 0; i < size; i++){
		delete animals[i];
	}
}

void	subject_test(){
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
}

void	hard_copy_test(){
	Cat*	cat[2];
	cat[0] = new Cat();
	cat[1] = new Cat(*cat[0]);

	for(int i = 0; i < 100; i++){
		cat[0]->setString(to_string(i), i);
	}
	for(int i = 0; i < 100; i++){
		std::cout << "First cat ate " << cat[0]->getString(i) << " Mice" << std::endl;
		std::cout << "Second cat ate " <<  cat[1]->getString(i) << " Mice" << std::endl;
	}
	cat[1] = cat[0];
	for(int i = 0; i < 100; i++){
		std::cout << "Second cat ate " <<  cat[1]->getString(i) << " Mice" << std::endl;
	}
	for(int i = 0; i < 100; i++){
		std::cout << "First cat address " << cat[0]->getStringAddress(i) << std::endl;
		std::cout << "Second cat address " <<  cat[1]->getStringAddress(i) << std::endl;
	}
	delete cat[0];
	delete cat[1];
}

int main()
{
	hard_copy_test();

	return 0;
}