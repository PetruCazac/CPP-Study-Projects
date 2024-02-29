/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:12:00 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/29 15:46:06 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>

template <typename T>
typename std::list<T>::iterator	easyfind( std::list<T>& nums, const T& i){
	typename std::list<T>::iterator it = std::find(nums.begin(), nums.end(), i);
	return it;
}

#endif