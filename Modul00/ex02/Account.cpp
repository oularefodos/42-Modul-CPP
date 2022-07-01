#include "Account.hpp"
#include <iostream>
#include <time.h>
#include <iomanip>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _displayTimestamp();
    if (initial_deposit > 0)
        _amount = initial_deposit;
    else
        _amount = 0;
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    _nbAccounts++;
    _totalAmount += _amount;
    _accountIndex = _nbAccounts - 1;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::Account(void) {
    _displayTimestamp();
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}


int Account::getNbAccounts (void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals (void) {
    return _totalNbWithdrawals;
}

void Account::makeDeposit(int deposit ){
    _displayTimestamp();
    if (deposit <= 0)
        return ;
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << _amount + deposit;
    std::cout << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal (int withdrawal ){
    _displayTimestamp();
    if (withdrawal > _amount || withdrawal < 0)
    {
        std::cout << "index:" << _accountIndex;
        std::cout << ";p_amount:" << _amount;
        std::cout << ";withdrawal:" << "refused" << std::endl;   
        return false;
    }
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";withdrawal:" << withdrawal;
    std::cout << ";amount:" << _amount - withdrawal;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return true;
}

void Account::_displayTimestamp(void) {
    time_t timestamp = time(NULL);
    struct tm * timeInfos = localtime(&timestamp);
    std::cout  << std::put_time(timeInfos, "[%Y%m%d_%H%M%S] ");
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
    std::cout << ";deposits:" <<  _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int Account::checkAmount(void) const
{
	return (_amount > 0);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

Account::~Account( void )
{
    _nbAccounts--;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}