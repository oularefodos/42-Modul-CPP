// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void ); // ok
	static int	getTotalAmount( void ); // ok
	static int	getNbDeposits( void );  // OK
	static int	getNbWithdrawals( void ); // OK
	static void	displayAccountsInfos( void ); // OK

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit ); // ok
	bool	makeWithdrawal( int withdrawal ); // ok
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;

private:

	static int	_nbAccounts; // ok
	static int	_totalAmount; // ok
	static int	_totalNbDeposits; // ok
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void ); // ok

	int				_accountIndex; // OK
	int				_amount; // OK 
	int				_nbDeposits; // OK
	int				_nbWithdrawals; // OK
	int				_index;
	Account( void );
};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */