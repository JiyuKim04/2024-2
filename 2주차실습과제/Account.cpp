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

//월이율 반환
double Account::getMonthlyInterestRate()
{
	return balance * annualInterestRate / 12 / 100;
}

//계좌에 amount 금액을 인출
void Account::withDraw(double amount)
{
	balance -= amount;
}

//계좌에 amount 금액을 입금
void Account::deposit(double amount)
{
	balance += amount;
}