#include"account.h"
#include<iostream>
using namespace std;
int main() {
	//���������˻�
	SavingsAccount sa0(1, 211202, 0.015);
	SavingsAccount sa1(1, 662101, 0.015);
	//������Ŀ
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);
	//������ھ�ʮ�쵽���е���Ϣ�գ����������˻�����Ϣ
	sa0.settle(90);
	sa1.settle(90);
	//������˻���Ϣ
	sa0.show();
	cout << endl;
	sa1.show();
	cout << endl;
	cout << "Total: " << SavingsAccount::getTotal() << endl;
	return 0;
}