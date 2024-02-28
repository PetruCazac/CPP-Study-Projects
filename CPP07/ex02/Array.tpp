/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:37:36 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/28 19:56:16 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array(){
	arr = new T[0];
	size = 0
}

template <typename T>
Array<T>::~Array(){
	delete[] arr;
}

template <typename T>
Array<T>::Array(const Array<T>& a){
	size = a.size;
	att = new T[size];
	std::copy()
}

#endif