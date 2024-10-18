#pragma once
#define MAX_ITEMS 4


//Stack은 Last in First Out의 특징을 갖기에 직전 상태를 불러오기 용이하다.
//이러한 Stack의 특성을 이용하여 pop()을 통해 직전 상태(잔액)을 불러오는 계좌 관리를 설계했다.
class BankStack 
{
private:

	int top;
	int pg;
	int data[MAX_ITEMS];

public:

	BankStack();
	void push(int cash);
	int pop();
	void deposit(int cash);
	void withDraw(int cash);

	bool isEmpty() const;
	bool isFull() const;

	void printAccount();
};