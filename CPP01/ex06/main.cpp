/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:09 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/31 11:21:15 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Harl.hpp"

bool	check_input(int argc, char **argv){
	if (argc != 2 && !argv[1]){
		return (std::cerr << "Harl doesn't want to handle this!" << std::endl, false);
	}
	return true;
}

int main(int argc, char *argv[]){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	level;
	Harl	harl;
	int	i = -1;

	if(!check_input(argc, argv))
		return 1;
	level = argv[1];
	while (++i < 4 ){
		if (i < 4 && level.compare(levels[i]) == 0){
			break;
		}
	}
	switch (i){
		case 0:
			harl.complain("DEBUG");
			/*FALLTHROUGH*/
		case 1:
			harl.complain("INFO");
			/*FALLTHROUGH*/
		case 2:
			harl.complain("WARNING");
			/*FALLTHROUGH*/
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "Ohh it's not the right time for that now!" << std::endl;
			return 1;
	}
	return 0;
}
