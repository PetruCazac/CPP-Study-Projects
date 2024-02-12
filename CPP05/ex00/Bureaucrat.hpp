/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:30:46 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/12 10:51:40 by pcazac           ###   ########.fr       */
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
	Bureaucrat(std::string name, int i);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& guy);
	Bureaucrat& operator=(const Bureaucrat& guy);
	

	std::string	getName();
	int			getGrade();
	
	void		incrementGrade();
	void		decrementGrade();

	class GradeTooHighException : public std::exception {
		public:
			virtual const std::string* what() throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const std::string* what() throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& guy);

#endif
