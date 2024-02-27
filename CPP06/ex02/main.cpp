/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/27 18:51:33 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void){
	std::srand(std::time(NULL));
	int i = std::rand() % 3;

	Base* b = NULL;
	switch (i) {
		case 0 :
			b = new A();
			std::cout << "I create a A class." << std::endl;
			break;
		case 1 :
			b = new B();
			std::cout << "I create a B class." << std::endl;
			break;
		case 2 :
			b = new C();
			std::cout << "I create a C class." << std::endl;
			break;
	}
	return b;
}

void	identify(Base* p){
	if(dynamic_cast<A*>(p) != NULL){
		std::cout << "It is class A." << std::endl;
	}else if(dynamic_cast<B*>(p) != NULL){
		std::cout << "It is class B." << std::endl;
	}else if(dynamic_cast<C*>(p) != NULL){
		std::cout << "It is class C." << std::endl;
	}else
		std::cout << "I really don't know the class." << std::endl;
}

void	identify(Base& p){
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << "It is class A." << std::endl;
		return;
	} catch (const std::exception &e){};
	try{
		(void)dynamic_cast<B&>(p);
		std::cout << "It is class B." << std::endl;
		return;
	} catch (const std::exception &e){};
	try{
		(void)dynamic_cast<C&>(p);
		std::cout << "It is class C." << std::endl;
		return;
	} catch (const std::exception &e){};
	std::cout << "I really don't know the class." << std::endl;
	return ;
}

int main()
{
	Base* base = generate();
	std::cout << std::endl;
	
	std::cout << "Checking the class pointer." << std::endl;
	identify(base);
	std::cout << std::endl;
	std::cout << "Checking the class reference." << std::endl;
	identify(*base);
	return 0;
}