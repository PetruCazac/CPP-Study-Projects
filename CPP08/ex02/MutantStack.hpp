/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:12:00 by pcazac            #+#    #+#             */
/*   Updated: 2024/03/01 16:14:08 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::iterator it;
	
private:

};

#include "MutantStack.tpp"

#endif