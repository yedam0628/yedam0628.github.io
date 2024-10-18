#include "BankStack.h"

bool BankStack::isFull() const{
	return (top == MAX_ITEMS - 1);
}