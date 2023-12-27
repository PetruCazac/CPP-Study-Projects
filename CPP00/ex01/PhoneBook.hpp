/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:41:49 by pcazac            #+#    #+#             */
/*   Updated: 2023/12/25 18:11:13 by pcazac           ###   ########.fr       */
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
		int		get_older_index(void);
		bool	search_contact(void);
	private:
		bool _loop;
		int _index;
		int _older;
		static const int MAX_CONTACTS = 8;
		Contact _contacts[MAX_CONTACTS];
};

#endif