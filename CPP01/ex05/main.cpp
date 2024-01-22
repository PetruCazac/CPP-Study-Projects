/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:09 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/22 23:37:16 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool	check_input(int argc, std::string filename, std::string to_find, std::string to_replace){
	if (argc != 4){
		std::cerr << "Heeeeyyy not enough parameters" << std::endl;
		std::cerr << "Usage: <filename> <chars to find> <chars to replace>" << std::endl;
		return (false);
	}
	if (filename.empty() == true){
		std::cerr << "Heeeeyyy there is no file" << std::endl;
		return (false);
	}
	if (to_find.empty() == true){
		std::cerr << "Heeeeyyy there is no search string" << std::endl;
		return (false);
	}
	if (to_replace.empty() == true){
		std::cerr << "Heeeeyyy there is no replacement string" << std::endl;
		return (false);
	}
	return (true);
}

int main(int argc, char *argv[]){
	std::string filename = argv[1];
	std::string to_find = argv[2];
	std::string to_replace = argv[3];
	if (!check_input(argc, filename, to_find, to_replace))
		return (std::cerr<<"ERROR"<< std::endl, 1);
	std::ifstream file;
	file.open(filename.c_str());
	if (!file.is_open())
		return (std::cerr<<"ERROR"<< std::endl, 1);
	std::ofstream	outfile;
	const std::string	outfilename = filename + ".replace";
	outfile.open(outfilename.c_str());
	if(!outfile.is_open())
		return 1;
	std::string	content((std::istreambuf_iterator<char>(file)), (std::istreambuf_iterator<char>()));
	size_t	i = content.find(to_find);
	while (i < content.size()){
		content.erase(i, to_find.size());
		content.insert(i, to_replace);
		i += to_replace.size();
		i = content.find(to_find);
	}
	outfile << content;
	return 0;
}
