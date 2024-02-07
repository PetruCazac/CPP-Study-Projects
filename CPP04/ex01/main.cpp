/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/07 15:02:48 by pcazac           ###   ########.fr       */
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


void	cat_hard_copy_test(){
	Cat	tom;
	Cat	grumpy = Cat(tom);
	int		nbIdeas = 10;

	std::cout << "Copying" << std::endl;
	tom = grumpy;
	for(int i = 0; i < nbIdeas; i++){
		tom.setString(to_string(i), i);
	}
	for(int i = 0; i < nbIdeas; i++){
		std::cout << "First cat ate " << tom.getString(i) << " Mice" << std::endl;
		std::cout << "Second cat ate " <<  grumpy.getString(i) << " Mice" << std::endl;
	}
	for(int i = 0; i < nbIdeas; i++){
		std::cout << "First  cat address " << tom.getStringAddress(i) << std::endl;
		std::cout << "Second cat address " <<  grumpy.getStringAddress(i) << std::endl;
	}
	grumpy = tom;
	for(int i = 0; i < nbIdeas; i++){
		std::cout << "Second cat ate " <<  grumpy.getString(i) << " Mice" << std::endl;
	}
	for(int i = 0; i < nbIdeas; i++){
		std::cout << "First  cat address " << tom.getStringAddress(i) << std::endl;
		std::cout << "Second cat address " <<  grumpy.getStringAddress(i) << std::endl;
	}
}

// void	dog_hard_copy_test(){
// 	Dog	tom;
// 	Dog	grumpy = Dog(tom);
// 	int		nbIdeas = 10;

// 	std::cout << "Copying" << std::endl;
// 	tom = grumpy;
// 	for(int i = 0; i < nbIdeas; i++){
// 		tom.setString(to_string(i), i);
// 	}
// 	for(int i = 0; i < nbIdeas; i++){
// 		std::cout << "First cat ate " << tom.getString(i) << " Bones" << std::endl;
// 		std::cout << "Second cat ate " <<  grumpy.getString(i) << " Bones" << std::endl;
// 	}
// 	for(int i = 0; i < nbIdeas; i++){
// 		std::cout << "First  cat address " << tom.getStringAddress(i) << std::endl;
// 		std::cout << "Second cat address " <<  grumpy.getStringAddress(i) << std::endl;
// 	}
// 	grumpy = tom;
// 	for(int i = 0; i < nbIdeas; i++){
// 		std::cout << "Second cat ate " <<  grumpy.getString(i) << " Bones" << std::endl;
// 	}
// 	for(int i = 0; i < nbIdeas; i++){
// 		std::cout << "First  cat address " << tom.getStringAddress(i) << std::endl;
// 		std::cout << "Second cat address " <<  grumpy.getStringAddress(i) << std::endl;
// 	}
// }

void	deepCopy_test(){
	Dog	dog;
	Dog temp = dog;
}

void	subject_test(){
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
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

int main()
{
	cat_hard_copy_test();
	std::cout << std::endl;
	// dog_hard_copy_test();
	// std::cout << std::endl;
	deepCopy_test();
	std::cout << std::endl;
	subject_test();
	std::cout << std::endl;
	big_quantity();
	std::cout << std::endl;
	return 0;
}