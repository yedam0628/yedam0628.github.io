#include <iostream>
#include "BankStack.h"


using namespace std;

int main() {
	BankStack myAccount;

	myAccount.deposit(5000);
	myAccount.printAccount();

	myAccount.deposit(5000);
	myAccount.printAccount();

	myAccount.withDraw(5000);
	myAccount.printAccount();

	myAccount.withDraw(6000);
	myAccount.printAccount();

	myAccount.deposit(20000);
	myAccount.printAccount();

	myAccount.withDraw(10000);
	myAccount.printAccount();

	myAccount.withDraw(6000);
	myAccount.printAccount();
}
