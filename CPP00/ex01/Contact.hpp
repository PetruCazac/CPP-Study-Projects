/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:41:55 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/20 12:38:48 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <string>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		std::string set_first_name(void);
		// std::string set_last_name(void);
		// std::string set_nickname(void);
		// std::string set_secret(void);
		// std::string set_phone(void);
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	secret;
		std::string	phone_nbr;
};

#endif