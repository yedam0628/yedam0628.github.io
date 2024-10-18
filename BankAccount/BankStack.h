#pragma once
#define MAX_ITEMS 4


//Stack�� Last in First Out�� Ư¡�� ���⿡ ���� ���¸� �ҷ����� �����ϴ�.
//�̷��� Stack�� Ư���� �̿��Ͽ� pop()�� ���� ���� ����(�ܾ�)�� �ҷ����� ���� ������ �����ߴ�.
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