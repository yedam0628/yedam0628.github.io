#include "BankStack.h"
//���ÿ� ���ο� ���� �߰��ϴ� �Լ�
void BankStack::push(int cash) {
	top++;
	data[top] = cash;
}