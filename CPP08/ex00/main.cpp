/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:34:15 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/29 15:50:37 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void ) {
	std::list<int>	nums;
	
	for(int i = 0; i < 10; i++)
		nums.push_back(i);
	std::list<int>::iterator it = easyfind<int>(nums, 3);
	std::cout << *it << std::endl;
	std::cout << std::endl;

	it = easyfind<int>(nums, 4);
	nums.insert(it, 123);
	for (std::list<int>::iterator iter = nums.begin(); iter != nums.end(); iter++)
		std::cout << *iter << std::endl;
	return 0;
	}
