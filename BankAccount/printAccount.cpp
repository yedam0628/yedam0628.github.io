#include <iostream>
#include <iomanip>
#include "BankStack.h"

using namespace std;
//������ �ܾ��� ����ϴ� �Լ�
void BankStack::printAccount() {
	cout << "|" << setw(10) 
		<<pg << " ��" 
		<<setw(10)<<"|" << '\n'; //�ʼ� ���

	for (int i = 0; i <= top; i++) { 
		if (i == top) {
			cout << "| ���� �ܾ�: " << setw(7) 
				<<data[i]  << "�� |" 
				<< '\n'; //�򰥸��� �ʰ� �����ܾ��� ���� ���
		}
		else {
			cout << "| �ܾ�: " << setw(12) 
				<< data[i]<< "��" <<setw(2)<<"|" << '\n';
		}
	}
	for (int i = 0; i < 25; i++) {
		cout << '-';
	}
	cout << endl;
}