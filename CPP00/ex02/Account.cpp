/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:43:52 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/17 19:19:24 by pcazac           ###   ########.fr       */
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
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	return ;
}

Account::Account( int initial_deposit ){
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ){
	return (_totalAmount);
}
int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
	return;
}

void	Account::displayStatus( void ) const{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return;
}

void	Account::makeDeposit( int deposit ){
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_nbDeposits++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal <= this->_amount){
		std::cout << ";withdrawal:" << withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
	}
	else
		std::cout << ";withdrawal:refused";
	std::cout << std::endl;
	return true;
}

void	Account::_displayTimestamp( void ){
	time_t temp = std::time(0);
	struct tm  *now = std::localtime(&temp);

	std::cout << std::setfill('0') << "[" << 1900 + now->tm_year;
	std::cout << std::setw(2) << 1 + now->tm_mon;
	std::cout << std::setw(2) << now->tm_mday << "_";
	std::cout << std::setw(2) << now->tm_hour;
	std::cout << std::setw(2) << now->tm_min;
	std::cout << std::setw(2) << now->tm_sec;
	std::cout << "] ";
	return;
}