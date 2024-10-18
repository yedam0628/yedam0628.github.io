#include <iostream>
#include "BankStack.h"

using namespace std;
//�Է��� ����ŭ ����ϴ� �Լ�
void BankStack::withDraw(int cash) {
	if (isEmpty()) {
		push(0);//������ ������� ��� 0������ �����Ͽ� ����ϱ� ����.
	}

	if (isFull()) {
		pg++;
		cout << "������ ���� ���� ���� �������� �̵��մϴ�." << endl;
		cout << '\n';
		int tmpTop = data[top];
		top = -1;
		push(tmpTop);
	}

	int tmp = pop();
	if (tmp < cash) { //����ϰ��� �ϴ� �ݾ��� �ܾ׺��� Ŭ ��� �����޼����� ����Ѵ�.
		cout << '\n';
		cout << "[ERROR] �ܾ��� Ȯ�����ּ���." << endl;
		cout << '\n';
		return;
	}
	else {
		push(tmp- cash);
		cout << '\n';
		cout << cash << "�� ��ݵǾ����ϴ�." << endl;
		cout << '\n';
	}
}