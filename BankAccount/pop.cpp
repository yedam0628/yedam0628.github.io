#include "BankStack.h"
//스택의 직전 상태를 불러오는 함수
int BankStack::pop() {
	int ret = data[top];
	return ret;
}