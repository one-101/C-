#ifndef  __ACCONUNT_H__
#define __ACCONUNT_H__

class SavingsAccount {
private:
	int id;										//账户
	double balance;						//余额
	double rate;								//存款的年利率
	int lastDate;								//上次变更余额的时间
	double accumulation;				//余额按日期累加之和
	static double total;					//所有账户的总金额
	//记一笔帐，date为日期，amoun为金额，desc为说明
	void record(int date, double amount);
	//获得到指定日期为止的存款金额按日累积值
	double accumulate(int date) const {
		return accumulation + balance * (date - lastDate);
	}
public:
	//构造函数
	SavingsAccount(int date, int id, double rate);
	int getId() const { return id; }
	double getBalance () const { return balance; }
	double getRate() const { return rate; }
	static double getTotal() { return total; }
	void deposit(int date, double amount);//存入现金
	void withdraw(int date, double amount);//取出现金
	//结算利息
	void settle(int date);
	//显示账户信息
	void show()const;
};

#endif // __ACCONUNT_H__

