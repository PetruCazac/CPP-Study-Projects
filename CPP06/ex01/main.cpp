/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/27 16:24:09 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data*		data = new Data;
	uintptr_t	serializedData;
	Data*		deserializedData;

	data->c = "c";
	data->i = 1;
	std::cout << "Data: "<< data->c << std::endl;
	std::cout << "Data: " << data->i << std::endl;
	serializedData = serialize(data);
	deserializedData = deserialize(serializedData);
	std::cout << "deserializedData: "<< deserializedData->c << std::endl;
	std::cout << "deserializedData: " << deserializedData->i << std::endl;
	delete data;
	return 0;
}