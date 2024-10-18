#include <iostream>
#include "BankStack.h"

using namespace std;
//입력한 값만큼 출금하는 함수
void BankStack::withDraw(int cash) {
	if (isEmpty()) {
		push(0);//스택이 비어있을 경우 0원으로 간주하여 계산하기 위함.
	}

	if (isFull()) {
		pg++;
		cout << "통장이 가득 차서 다음 페이지로 이동합니다." << endl;
		cout << '\n';
		int tmpTop = data[top];
		top = -1;
		push(tmpTop);
	}

	int tmp = pop();
	if (tmp < cash) { //출금하고자 하는 금액이 잔액보다 클 경우 에러메세지를 출력한다.
		cout << '\n';
		cout << "[ERROR] 잔액을 확인해주세요." << endl;
		cout << '\n';
		return;
	}
	else {
		push(tmp- cash);
		cout << '\n';
		cout << cash << "원 출금되었습니다." << endl;
		cout << '\n';
	}
}