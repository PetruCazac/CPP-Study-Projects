/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:40:50 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/12 18:12:54 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form : public Bureaucrat {

public:

	Form(std::string name, int sign_grade, int exec_grade);
	~Form();
	Form(const Form& sheet);
	Form& operator=(const Form& sheet);

	const std::string&		getName();
	bool					getIfSigned();
	const int				getSignedGrade();
	const int				getExecGrade();

	void			beSigned(Bureaucrat& guy);
	void			signForm(Bureaucrat& guy);

private:
	const std::string	_name;
	bool				_if_signed;
	const int			_sign_grade;
	const int			_exec_grade;

};

std::ostream* operator<<(std::ostream* out, const Form& sheet);

#endif