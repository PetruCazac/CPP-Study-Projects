/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:41:49 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/27 16:11:19 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
# include "Contact.hpp"

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
