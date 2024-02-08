/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:30:46 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/08 18:13:27 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
private:
	std::string _name;
	int			_grade;

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& guy);
	Bureaucrat& operator=(const Bureaucrat& guy);
	
	std::ostream& operator<<(const Bureaucrat& guy);

	std::string	getName();
	int			getGrade();
	
	void		incrementGrade();
	void		decrementGrade();

	void GradeTooHighException
		
	}
};

#endif