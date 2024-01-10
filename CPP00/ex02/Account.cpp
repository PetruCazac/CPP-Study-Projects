/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:43:52 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/10 14:05:07 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

Account::Account( void ){
	return ;
}

Account::Account( int initial_deposit ){
	
	_accountIndex++;

}

Account::~Account( void ){
	return ;
}



void	makeDeposit( int deposit );
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;
static void	_displayTimestamp( void ){
	time_t temp = std::time(0);
	struct tm  *now = std::localtime(&temp);

	std::cout << setfill('0');
	std::cout << '[' << setw(4) << 
	std::cout <<
}
void	displayAccountsInfos( void ){
}



int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ){
	return (_totalAmount);
}
int	Account::getNbDeposits( void ){
	return (_nbDeposits);
}
int	Account::getNbWithdrawals( void ){
	return (_nbWithdrawals);
}