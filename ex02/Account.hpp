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

	static int	getNbAccounts( void );//— Global : retourne le nombre total de comptes. — ✅ Usage : int n = Account::getNbAccounts();
	static int	getTotalAmount( void );//— Global : retourne la somme des soldes de tous les comptes. — ✅ Usage : int sum = Account::getTotalAmount();
	static int	getNbDeposits( void );//— Global : retourne le nombre total de dépôts. — ✅ Usage : int nd = Account::getNbDeposits();
	static int	getNbWithdrawals( void );//— Global : retourne le nombre total de retraits. — ✅ Usage : int nw = Account::getNbWithdrawals();
	static void	displayAccountsInfos( void );//— Global : affiche les infos de tous les comptes. — ✅ Usage : Account::displayAccountsInfos();

	Account( int initial_deposit );//Constructeur : crée un compte avec un dépôt initial, fixe l’index, met à jour les totaux globaux, affiche ...;created. — ✅ Usage : Account a(100);
	~Account( void );//Destructeur : message de fermeture avec le solde (...;closed). — ✅ Usage : se déclenche tout seul quand l’objet sort de portée : { Account a(100); } // dtor appelé ici

	void	makeDeposit( int deposit );//— Dépôt sur ce compte : met à jour le solde, les compteurs, les totaux globaux ; affiche p_amount, deposit, amount, nb_deposits. — ✅ Usage : a.makeDeposit(50);
	bool	makeWithdrawal( int withdrawal );//Retrait sur ce compte : si fonds insuffisants → affiche withdrawal:refused, ne change rien, retourne false ; sinon met à jour solde/compteurs/totaux, affiche la ligne complète, retourne true. — ✅ Usage : if (a.makeWithdrawal(20)) { /* ok */ }
	int		checkAmount( void ) const;//Getter solde : retourne le montant de ce compte (pas d’effet de bord). — ✅ Usage : int m = a.checkAmount();
	void	displayStatus( void ) const;//État du compte : affiche index;amount;deposits;withdrawals pour cet objet. — ✅ Usage : a.displayStatus();


private:

	static int	_nbAccounts;//— compteur global du nombre de comptes créés.
	static int	_totalAmount;//somme des soldes de tous les comptes.
	static int	_totalNbDeposits;//— compteur global du nombre de dépôts effectués.
	static int	_totalNbWithdrawals;//— compteur global du nombre de retraits effectués.

	static void	_displayTimestamp( void );//Privée utilitaire : imprime [YYYYMMDD_HHMMSS] , sans newline ; utilisée en interne avant chaque ligne d’output. — 🚫 Pas accessible depuis le main

	int				_accountIndex; //— index de ce compte (0 pour le 1er, 1 pour le 2e, etc.).
	int				_amount;	//— solde actuel de ce compte.
	int				_nbDeposits; //— nombre de dépôts effectués sur ce compte.
	int				_nbWithdrawals; //— nombre de retraits effectués sur ce compte.

	Account( void );//Constructeur par défaut privé : empêche Account a; (il faut un dépôt initial). — 🚫 Pas appelable par l’utilisateur

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
