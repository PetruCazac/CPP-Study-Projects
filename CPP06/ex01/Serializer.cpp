/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:10:57 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/27 16:12:36 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}