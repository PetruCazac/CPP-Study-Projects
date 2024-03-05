/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:56:54 by pcazac            #+#    #+#             */
/*   Updated: 2024/03/01 15:56:55 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return MutantStack<T>::c.begin();
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return MutantStack<T>::c.end();
}

#endif