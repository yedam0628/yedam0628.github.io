#include "BankStack.h"
//생성자
BankStack::BankStack() {
	top = -1;//기본 top을 index -1로 설정한다.
	pg = 1; //기본 page를 1쪽으로 설정한다.
}