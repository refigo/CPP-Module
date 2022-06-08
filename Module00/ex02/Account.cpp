#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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

/*
	[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

	[19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0

	[19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
*/
void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

/*
	[19920104_091532] index:0;amount:42;created
	[19920104_091532] index:1;amount:54;created
	[19920104_091532] index:2;amount:957;created
	[19920104_091532] index:3;amount:432;created
	[19920104_091532] index:4;amount:1234;created
	[19920104_091532] index:5;amount:0;created
	[19920104_091532] index:6;amount:754;created
	[19920104_091532] index:7;amount:16576;created
*/
Account::Account(int initial_deposit)
{
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created\n";

	++(Account::_nbAccounts);
	Account::_totalAmount += _amount;
}

/*
	[19920104_091532] index:0;amount:47;closed
	[19920104_091532] index:1;amount:785;closed
	[19920104_091532] index:2;amount:864;closed
	[19920104_091532] index:3;amount:430;closed
	[19920104_091532] index:4;amount:1245;closed
	[19920104_091532] index:5;amount:23;closed
	[19920104_091532] index:6;amount:106;closed
	[19920104_091532] index:7;amount:8942;closed
*/
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deleted\n";

	--(Account::_nbAccounts);
	Account::_totalAmount -= _amount;
}

/*
	[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	[19920104_091532] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1
	[19920104_091532] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
	[19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
	[19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
	[19920104_091532] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1
	[19920104_091532] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1
	[19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
*/
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
	Account::_totalNbDeposits += 1;
}

/*
	[19920104_091532] index:0;p_amount:47;withdrawal:refused
	[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	[19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
	[19920104_091532] index:3;p_amount:434;withdrawal:4;amount:430;nb_withdrawals:1
	[19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
	[19920104_091532] index:5;p_amount:23;withdrawal:refused
	[19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
	[19920104_091532] index:7;p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1
*/
bool Account::makeWithdrawal( int withdrawal )
{
	return (true);
}

/*
	[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	[19920104_091532] index:1;amount:54;deposits:0;withdrawals:0
	[19920104_091532] index:2;amount:957;deposits:0;withdrawals:0
	[19920104_091532] index:3;amount:432;deposits:0;withdrawals:0
	[19920104_091532] index:4;amount:1234;deposits:0;withdrawals:0
	[19920104_091532] index:5;amount:0;deposits:0;withdrawals:0
	[19920104_091532] index:6;amount:754;deposits:0;withdrawals:0
	[19920104_091532] index:7;amount:16576;deposits:0;withdrawals:0


	[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
	[19920104_091532] index:1;amount:819;deposits:1;withdrawals:0
	[19920104_091532] index:2;amount:1521;deposits:1;withdrawals:0
	[19920104_091532] index:3;amount:434;deposits:1;withdrawals:0
	[19920104_091532] index:4;amount:1321;deposits:1;withdrawals:0
	[19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
	[19920104_091532] index:6;amount:763;deposits:1;withdrawals:0
	[19920104_091532] index:7;amount:16596;deposits:1;withdrawals:0


	[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
	[19920104_091532] index:1;amount:785;deposits:1;withdrawals:1
	[19920104_091532] index:2;amount:864;deposits:1;withdrawals:1
	[19920104_091532] index:3;amount:430;deposits:1;withdrawals:1
	[19920104_091532] index:4;amount:1245;deposits:1;withdrawals:1
	[19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
	[19920104_091532] index:6;amount:106;deposits:1;withdrawals:1
	[19920104_091532] index:7;amount:8942;deposits:1;withdrawals:1
*/
void Account::displayStatus( void ) const
{

}

//	[19920104_091532]
void Account::_displayTimestamp(void)
{
	std::time_t		rawtime;
	struct std::tm *timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << std::setfill('0');
	std::cout << '[';
	std::cout << (1900 + timeinfo->tm_year);
	std::cout << std::setw(2) << (timeinfo->tm_mon);
	std::cout << std::setw(2) << (timeinfo->tm_mday);
	std::cout << '_';
	std::cout << std::setw(2) << (timeinfo->tm_hour);
	std::cout << std::setw(2) << (timeinfo->tm_min);
	std::cout << std::setw(2) << (timeinfo->tm_sec);
	std::cout << "] ";
	std::cout << std::setfill(' ');
}
