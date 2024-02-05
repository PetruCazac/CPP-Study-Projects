/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:24:53 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/05 16:32:28 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATEROASOURCE_HPP
#define MATEROASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	

public:
	MateriaSource();
	MateriaSource(const AMateria& materia);
	MateriaSource& operator=(const AMateria& materia);
	~MateriaSource();
	void learnMateria(AMateria*) = 0;
	AMateria* createMateria(std::string const & type) = 0;

};

#endif
