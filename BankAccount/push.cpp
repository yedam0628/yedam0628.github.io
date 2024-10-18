#include "BankStack.h"
//스택에 새로운 값을 추가하는 함수
void BankStack::push(int cash) {
	top++;
	data[top] = cash;
}