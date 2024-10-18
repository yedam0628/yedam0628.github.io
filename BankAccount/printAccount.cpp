#include <iostream>
#include <iomanip>
#include "BankStack.h"

using namespace std;
//계좌의 잔액을 출력하는 함수
void BankStack::printAccount() {
	cout << "|" << setw(10) 
		<<pg << " 쪽" 
		<<setw(10)<<"|" << '\n'; //쪽수 출력

	for (int i = 0; i <= top; i++) { 
		if (i == top) {
			cout << "| 최종 잔액: " << setw(7) 
				<<data[i]  << "원 |" 
				<< '\n'; //헷갈리지 않게 최종잔액은 따로 출력
		}
		else {
			cout << "| 잔액: " << setw(12) 
				<< data[i]<< "원" <<setw(2)<<"|" << '\n';
		}
	}
	for (int i = 0; i < 25; i++) {
		cout << '-';
	}
	cout << endl;
}