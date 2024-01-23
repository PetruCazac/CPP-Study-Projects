/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:09 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/23 01:09:43 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Harl.hpp"

int main(int argc, char *argv[]){
	if (argc != 2){
		return (std::cerr << "Harl doesn't want to handle this!" << std::endl, 1);
	}
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	level = argv[1];
	Harl	harl;
	int	i = -1;
	while (++i <= 4 ){
		if (i < 4 && level.compare(levels[i]) == 0){
			break;
		}
	}
	switch (i){
		case 0:
			harl.complain("DEBUG");
			__attribute__((fallthrough));
		case 1:
			harl.complain("INFO");
			__attribute__((fallthrough));
		case 2:
			harl.complain("WARNING");
			__attribute__((fallthrough));
		case 3:
			harl.complain("ERROR");
			break;
		case 4:
			std::cout << "Ohh it's not the right time for that now!" << std::endl;
	}
	return 0;
}
