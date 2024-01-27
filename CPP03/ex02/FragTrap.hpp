/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:52:39 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/27 16:21:17 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap{

public:

	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap& frag);
	FragTrap& operator=(const FragTrap& frag);
	
	void highFivesGuys(void);

private:

};

#endif