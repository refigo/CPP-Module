/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:20:39 by mgo               #+#    #+#             */
/*   Updated: 2022/06/15 19:32:05 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts(0);
int Account::_totalAmount(0);
int Account::_totalNbDeposits(0);
int Account::_totalNbWithdrawals(0);

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

Account::Account(int initial_deposit)
	: _accountIndex(Account::_nbAccounts++)
	, _amount(initial_deposit)
	, _nbDeposits(0)
	, _nbWithdrawals(0)
{
	Account::_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created\n";
}

Account::~Account(void)
{
	--(Account::_nbAccounts);
	Account::_totalAmount -= _amount;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed\n";
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	_amount += deposit;
	++(_nbDeposits);
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits;
	std::cout << '\n';
	Account::_totalAmount += deposit;
	++(Account::_totalNbDeposits);
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused\n";
		return (false);
	}
	_amount -= withdrawal;
	++(_nbWithdrawals);
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals;
	std::cout << '\n';
	Account::_totalAmount -= withdrawal;
	++(Account::_totalNbWithdrawals);
	return (true);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals;
	std::cout << '\n';
}

void Account::_displayTimestamp(void)
{
	std::time_t		rawtime;
	struct std::tm *timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << std::setfill('0');
	std::cout << '[';
	std::cout << (1900 + timeinfo->tm_year);
	std::cout << std::setw(2) << (timeinfo->tm_mon + 1);
	std::cout << std::setw(2) << (timeinfo->tm_mday);
	std::cout << '_';
	std::cout << std::setw(2) << (timeinfo->tm_hour);
	std::cout << std::setw(2) << (timeinfo->tm_min);
	std::cout << std::setw(2) << (timeinfo->tm_sec);
	std::cout << "] ";
	std::cout << std::setfill(' ');
}

Account::Account(void)
	: _accountIndex(Account::_nbAccounts++)
	, _amount(0)
	, _nbDeposits(0)
	, _nbWithdrawals(0)
{	
	Account::_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created\n";
}
