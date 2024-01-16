/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:43:52 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/16 12:12:40 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void ){
	return ;
}
Account::~Account( void ){
	return ;
}
Account::Account( int initial_deposit ){
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	std::cout<< Account::_displayTimestamp() << "index:" << Account::_nbAccounts
	<< ";amount:" << initial_deposit << ";created" << std::endl;
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