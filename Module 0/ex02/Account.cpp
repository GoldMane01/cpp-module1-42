#include <ctime>
#include <iostream>
#include "Account.hpp"

static int nextAccountIndex = 0;
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(nextAccountIndex++),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0) {
		_displayTimestamp();
		std::cout << " index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";created" << std::endl;

		_totalAmount += _amount;
		_nbAccounts++;
}
Account::~Account() {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit( int deposit ) {
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex
			<< ";p_amount:" << _amount - deposit
			<< ";deposit:" << deposit
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	if (_amount - withdrawal < 0) {
		Account::_displayTimestamp();
		std::cout << " index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";withdrawal:" << "refused" << std::endl;
		return (false);
	} else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;

		Account::_displayTimestamp();
		std::cout << " index:" << _accountIndex
			<< ";p_amount:" << _amount + withdrawal
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		
		return (true);
	}
}

int	Account::checkAmount( void ) const {
	return (_amount);
}

void Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void ) {
	std::time_t now = std::time(NULL);
    std::tm* localTime = std::localtime(&now);

    char timestamp[20];
    std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", localTime);

 	std::cout << timestamp;
}