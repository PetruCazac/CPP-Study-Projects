/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:44:12 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/30 14:18:44 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int	main(int argc, char **argv)
{
	std::locale	local;
	if (argc < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			std::cout << std::toupper(argv[i][j], local);
		if (i < argc - 1)
			std::cout << " ";
	}
	std ::cout << std::endl;
	return (0);
}
