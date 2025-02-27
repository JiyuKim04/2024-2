#pragma once
class Account {
private:
	int id;
	int balance;
	double annualInterestRate;

public:
	Account();
	Account(int newld, double newbalance, double newAnnualInterestRate);
	int getid();
	void setid(int newId);

	double getbalance();

	void setbalance(double newbalance);

	double getannualInterestRate();

	void setannualInterestRate(double newannualInterestRate);
	double getMonthlyInterestRate();
	void withDraw(double amount);
	void deposit(double amount);
};