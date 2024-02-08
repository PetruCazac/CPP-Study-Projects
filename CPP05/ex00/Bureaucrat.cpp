/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:00:15 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/08 17:07:35 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int i){
	try {
		
	}
}
Bureaucrat::~Bureaucrat(){}
Bureaucrat::Bureaucrat(const Bureaucrat& guy){
	
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& guy){
	
}

std::ostream& Bureaucrat::operator<<(const Bureaucrat& guy){}
std::string	Bureaucrat::getName(){}
int			Bureaucrat::getGrade(){}

void		Bureaucrat::incrementGrade(){}
void		Bureaucrat::decrementGrade(){}