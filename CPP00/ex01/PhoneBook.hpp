/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:41:49 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/30 10:55:52 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"
# include <cstdio>

class PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		bool	new_contact(void);
		bool	set_index(void);
		int		get_index(void);
		bool	search_contact(void);
		std::string get_contacts(void);
		std::string output_str(std::string str);
	private:
		int _index;
		int _max;
		static const int MAX_CONTACTS = 8;
		Contact _contacts[MAX_CONTACTS];
};

#endif
