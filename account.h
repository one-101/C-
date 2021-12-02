#ifndef  __ACCONUNT_H__
#define __ACCONUNT_H__

class SavingsAccount {
private:
	int id;										//�˻�
	double balance;						//���
	double rate;								//����������
	int lastDate;								//�ϴα������ʱ��
	double accumulation;				//�������ۼ�֮��
	static double total;					//�����˻����ܽ��
	//��һ���ʣ�dateΪ���ڣ�amounΪ��descΪ˵��
	void record(int date, double amount);
	//��õ�ָ������Ϊֹ�Ĵ������ۻ�ֵ
	double accumulate(int date) const {
		return accumulation + balance * (date - lastDate);
	}
public:
	//���캯��
	SavingsAccount(int date, int id, double rate);
	int getId() const { return id; }
	double getBalance () const { return balance; }
	double getRate() const { return rate; }
	static double getTotal() { return total; }
	void deposit(int date, double amount);//�����ֽ�
	void withdraw(int date, double amount);//ȡ���ֽ�
	//������Ϣ
	void settle(int date);
	//��ʾ�˻���Ϣ
	void show()const;
};

#endif // __ACCONUNT_H__

