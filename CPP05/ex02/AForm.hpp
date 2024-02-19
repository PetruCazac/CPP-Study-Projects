/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:40:50 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/19 16:10:57 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

public:

	AForm(std::string name, int sign_grade, int exec_grade);
	virtual ~AForm();
	AForm(const AForm& sheet);
	AForm& operator=(const AForm& sheet);

	virtual const std::string&		getName() const;
	virtual bool					getIfSigned() const;
	virtual int						getSignedGrade() const;
	virtual int						getExecGrade() const;

	void							setSigned(bool sign);
	virtual void					beSigned(Bureaucrat& guy);
	void							execute(Bureaucrat const & executor) const;
	virtual void					executeForm() const = 0;

	
	class GradeTooHighException : public std::exception {
		public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
		const char* what() const throw();
	};
	class FormNotSignedException : public std::exception {
		public:
			const char* what() const throw();
	};

private:

	const std::string	_name;
	bool				_if_signed;
	const int			_sign_grade;
	const int			_exec_grade;

};

std::ostream& operator<<(std::ostream& out, const AForm& sheet);

#endif