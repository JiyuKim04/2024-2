#include <iostream>
#include "Rectangle.h"
#include "Account.h"

using namespace std;

int main()
{
	cout << "==============================================================" << endl;
	cout << "<Exercise 09-01 소프트웨어융합학과 - 2023111429 - 김지유>" << endl;
	Rectangle r1(4 , 40);
	cout << "The first rectangle: width = " << r1.getWidth() << ", height =" << r1.getHeight() << endl;
	cout << "Area = " << r1.getArea() << endl;
	cout << "Permiter =" << r1.getPerimeter() << endl << endl;

	Rectangle r2(3.5, 35.9);
	cout << "The second rectangle: width = " << r2.getWidth() << ", height =" << r2.getHeight() << endl;
	cout << "Area = " << r2.getArea() << endl;
	cout << "Permiter =" << r2.getPerimeter() << endl << endl;

	r2.setWidth(2.5);
	r2.setHeight(34.9);
	cout << "The second rectangle: width = " << r2.getWidth() << ", height =" << r2.getHeight() << endl;
	cout << "Area = " << r2.getArea() << endl;
	cout << "Permiter =" << r2.getPerimeter() << endl << endl;

	cout << "==============================================================" << endl;
	cout << "<Exercise 09-04 소프트웨어융합학과 - 2023111429 - 김지유>" << endl;
	Account Account(1122, 20000, 4.5);
	Account.withDraw(2500);
	Account.deposit(3000);
	cout << "Balance is " << Account.getbalance() << endl;
	cout << "Monthly interest is " << Account.getMonthlyInterestRate() << endl;
	return 0;


	

}


