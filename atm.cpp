#include "atm.h"
#include<iostream>

ATM::ATM()
{
	bank_account = BankAccount(123)
}

void ATM::display_balance()
{
	std::cout << "Balance: " << account.get_balance();

}
