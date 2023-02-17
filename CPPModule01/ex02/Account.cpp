/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkanmado <rkanmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 07:45:41 by rkanmado          #+#    #+#             */
/*   Updated: 2023/02/17 04:59:57 by rkanmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_CPP
#define ACCOUNT_CPP

#include "Account.hpp"
#include "ctime"

int Account::checkAmount() const {
	return _amount;
}

int Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int Account::getTotalAmount( void ) {
	return _totalAmount;
}

int Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ) {
	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits" << _totalNbDeposits
			<< ";withdrawals" << _totalNbWithdrawals
			<< std::endl;
}

void Account::makeDeposit(int deposit) {
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits" << deposit
			<< ";withdrawals" << 0
			<< std::endl;
	return ;
}

Account::Account(int initial_deposit) {
	_nbAccounts += 1;
	_amount = initial_deposit;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _totalAmount
			  << ";created" << std::endl;
	return ;
}

Account::Account()
{
	_amount = 0;
	_accountIndex = 0;
	_nbAccounts = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalNbDeposits = 0;
	_totalAmount = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _totalAmount
			  << ";closed";
};

bool Account::makeWithdrawal(int withdrawal) {
	if (_amount < withdrawal) {
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}

	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";withdrawal:" << withdrawal
			  << ";amount:" << _amount - withdrawal
			  << ";withdrawal:" << _nbWithdrawals + 1
			  << std::endl;

	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	return (true);
}

void Account::displayStatus() const {
	return ;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";closed";
}

void Account::_displayTimestamp() {
	time_t now = time(0);
	tm *ltm = localtime(&now);

	std::cout << 1900 + ltm->tm_year << 1 + ltm->tm_mon
			  << ltm->tm_mday << "_" << ltm->tm_hour
			  << ltm->tm_min << ltm->tm_sec << std::endl;
	return ;
}

#endif
