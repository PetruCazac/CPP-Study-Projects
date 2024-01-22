/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:09 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/23 00:34:26 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Harl.hpp"

int main(int argc, char *argv[]){
	if (argc != 2){
		return (std::cerr << "Harl doesn't want to handle this!" << std::endl, 1);
	}
	std::string	level = argv[1];
	Harl	harl;

	harl.complain(level);
	return 0;
}
