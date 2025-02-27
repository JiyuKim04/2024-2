#include "Account.h"

Account::Account() : id(0), balance(0), annualInterestRate(0) {}
Account::Account(int newId, double newbalance, double newAnnualInterestRate) : id(newId), balance(newbalance), annualInterestRate(newAnnualInterestRate) {}

int Account::getid()
{
	return id;
}
void Account::setid(int newId)
{
	id = newId;
}

double Account::getbalance()
{
	return balance;
}
void Account::setbalance(double newbalance)
{
	balance = newbalance;
}

double Account::getannualInterestRate()
{
	return annualInterestRate;
}
void Account::setannualInterestRate(double newannualInterestRate)
{
	annualInterestRate = newannualInterestRate;
}

//������ ��ȯ
double Account::getMonthlyInterestRate()
{
	return balance * annualInterestRate / 12 / 100;
}

//���¿� amount �ݾ��� ����
void Account::withDraw(double amount)
{
	balance -= amount;
}

//���¿� amount �ݾ��� �Ա�
void Account::deposit(double amount)
{
	balance += amount;
}