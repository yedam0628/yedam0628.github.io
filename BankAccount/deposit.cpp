#include <iostream>
#include "BankStack.h"

using namespace std;
//�Է��� ����ŭ �Ա��ϴ� �Լ�
void BankStack::deposit(int cash) {
	if (isEmpty()) {
		push(0); //������ ��������� 0���� �ְ� �����Ѵ�.
	}

	if (isFull()) {
		cout << "������ ���� ���� ���� �������� �̵��մϴ�." << endl;
		cout << '\n';
		pg++;
		int tmpTop = data[top];
		top = -1;
		push(tmpTop);
	}

	int tmp = pop();
	push(tmp + cash);
	cout << '\n';
	cout << cash << "�� �ԱݵǾ����ϴ�." << endl;
	cout << '\n';
}