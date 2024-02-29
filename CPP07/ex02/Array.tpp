/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:37:36 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/29 11:39:00 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array(){
	arr = new T[0];
	arrSize = 0;
}
template <typename T>
Array<T>::Array(unsigned int i){
	arr = new T[i];
	arrSize = i;
}

template <typename T>
Array<T>::~Array(){
	delete[] arr;
}

template <typename T>
Array<T>::Array(const Array<T>& a){
	arrSize = a.arrSize;
	arr = new T[arrSize];
	for (unsigned int i = 0; i < arrSize; i++)
		arr[i] = a.arr[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& a){
	if(this != &a){
		arrSize = a.arrSize;
		delete[] arr;
		arr = new T[arrSize];
		for (int i = 0; i < arrSize; i++)
			arr[i] = a.arr[i];
	}
	return a;
}

template <typename T>
T	&Array<T>::operator[](int i){
	if (i < 0 || static_cast<unsigned int>(i) >= arrSize)
		throw(EndOfArrayException());
	else
		return(arr[i]);
}

template <typename T>
int	Array<T>::size(){
	return arrSize;
}

#endif