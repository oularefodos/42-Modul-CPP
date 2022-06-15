#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) {
    _amount = initial_deposit;
    if (_amount > 0)
        _nbDeposits = 1;
    else
        _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;
    _totalNbDeposits += _nbDeposits;
    _totalNbWithdrawals = 0;
}

int Account::getNbAccounts (void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

// int Account::getNbDeposits(void) {
//     return _nbDeposits;
// }

// int Account::getNbWithdrawals (void) {
//     return _nbWithdrawals;
// }

void Account::makeDeposit(int deposit ){
    if (deposit <= 0)
    {
        std::cout << "Invalable value" << std::endl;
        return ;
    }
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal (int withdrawal ){
    if (withdrawal > _amount || withdrawal < 0)
    {
        std::cout << "Invalable value" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return true;
}