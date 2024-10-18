#include <iostream>
#include "BankStack.h"

using namespace std;
//입력한 값만큼 입금하는 함수
void BankStack::deposit(int cash) {
	if (isEmpty()) {
		push(0); //스택이 비어있으면 0원을 넣고 시작한다.
	}

	if (isFull()) {
		cout << "통장이 가득 차서 다음 페이지로 이동합니다." << endl;
		cout << '\n';
		pg++;
		int tmpTop = data[top];
		top = -1;
		push(tmpTop);
	}

	int tmp = pop();
	push(tmp + cash);
	cout << '\n';
	cout << cash << "원 입금되었습니다." << endl;
	cout << '\n';
}