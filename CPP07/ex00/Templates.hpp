/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:33:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/28 10:44:54 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>
#include <string>
// Function templates

template <typename T>
void swap(T a, T b){
	T c = a;
	a = b;
	b = c;
}
template <typename T>
T min(T a, T b){
	if((a < b))
		return a;
	else
		return b;
}
template <typename T>
T max(T a, T b){
	if((a > b))
		return a;
	else
		return b;
}

#endif
