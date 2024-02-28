/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:33:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/28 14:08:31 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
// Function templates

template <typename T, typename Func>
void iter(T* arr, int length, Func func){
	for (int i = 0; i < length; i++){
		func(arr[i]);
	}
}

#endif
