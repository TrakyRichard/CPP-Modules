/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkanmado <rkanmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 07:45:41 by rkanmado          #+#    #+#             */
/*   Updated: 2023/02/17 04:58:47 by rkanmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_CPP
#define ACCOUNT_CPP

#include "Account.hpp"
#include "ctime"

int Account::checkAmount() const {
	return this->_amount;
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
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits" << deposit
			<< ";withdrawals" << 0
			<< std::endl;
	return ;
}

Account::Account(int initial_deposit) {
	this->_nbAccounts += 1;
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts - 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->_totalAmount
			  << ";created" << std::endl;
	return ;
}

Account::Account()
{
	this->_amount = 0;
	this->_accountIndex = 0;
	this->_nbAccounts = 0;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalNbDeposits = 0;
	this->_totalAmount = 0;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->_totalAmount
			  << ";closed";
};

bool Account::makeWithdrawal(int withdrawal) {
	if (this->_amount < withdrawal) {
		this->_displayTimestamp();
		std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount
			  << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}

	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount
			  << ";withdrawal:" << withdrawal
			  << ";amount:" << this->_amount - withdrawal
			  << ";withdrawal:" << this->_nbWithdrawals + 1
			  << std::endl;

	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals += 1;
	this->_totalNbWithdrawals += 1;
	return (true);
}

void Account::displayStatus() const {
	return ;
}

Account::~Account() {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->_amount
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
