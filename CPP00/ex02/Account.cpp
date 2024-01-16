/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:43:52 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/16 15:05:44 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

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
Account::~Account( void ){
	return ;
}
Account::Account( int initial_deposit ){
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_displayTimestamp();
	std::cout<< "index:" << Account::_nbAccounts
	<< ";amount:" << initial_deposit << ";created" << std::endl;
	return;
}

void	makeDeposit( int deposit ){
	this->deposit += ;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << "ammount:" << this->_amount;
	std::cout << "deposits:" << this->_amount;
	std::cout << 
}
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;

void	Account::displayStatus( void ){
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << "ammount:" << this->_amount;
	std::cout << "deposits:" << this->_amount;
	return;
}

void Account::displayAccountsInfos( void ){
	this->_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << "total:" << getTotalAmount();
	std::cout << "deposits:" << getNbDeposits();
	std::cout << "withdrawals:" << getNbWithdrawals();
	return;
}

static Account::_displayTimestamp( void ){
	time_t temp = std::time(0);
	struct tm  *now = std::localtime(&temp);

	std::cout << setfill('0') << "[" << now->tm_year;
	std::cout << setw(2) << now->tm_mon;
	std::cout << setw(2) << now->tm_mday << "_";
	std::cout << setw(2) << now->tm_hour;
	std::cout << setw(2) << now->tm_min;
	std::cout << setw(2) << now->tm_sec;
	std::cout << "] ";
	return;
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