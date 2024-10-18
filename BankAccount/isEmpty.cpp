#include "BankStack.h"
//스택이 비어있는지 확인하는 함수
bool BankStack::isEmpty() const {
	return (top == -1);
}