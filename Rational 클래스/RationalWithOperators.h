#ifndef RATIONALWITHOPERATORS_H
#define RATIONALWITHOPERATORS_H
#include <string>
#include <iostream>
using namespace std;

class Rational
{
public:
	Rational();
	Rational(int numerator, int denominator);
	int getNumerator() const;
	int getDenominator() const;
	Rational add(const Rational& secondRational) const;
	Rational subtract(const Rational& secondRational) const;
	Rational multiply(const Rational& secondRational) const;
	Rational divide(const Rational& secondRational) const;
	int compareTo(const Rational& secondRational) const;
	bool equals(const Rational& secondRational) const;
	int inValue() const;
	double doubleValue() const;
	string toString() const;

	Rational(int numerator);

	Rational& operator+=(const Rational& secondRational);
	Rational& operator-=(const Rational& secondRational);
	Rational& operator*=(const Rational& secondRational);
	Rational& operator/=(const Rational& secondRational);

	int& operator[](int index);

	Rational& operator++();
	Rational& operator--();

	Rational operator++(int dummy);
	Rational operator--(int dummy);

	Rational operator+();
	Rational operator-();

	friend ostream& operator<<(ostream&, const Rational&);
	friend ostream& operator>>(ostream&, Rational&);

	int numerator;
	int denominator;

private:
	static int gcd(int n, int d);
};

bool operator<(const Rational& r1, const Rational& r2);
bool operator<=(const Rational& r1, const Rational& r2);
bool operator>(const Rational& r1, const Rational& r2);
bool operator>=(const Rational& r1, const Rational& r2);
bool operator==(const Rational& r1, const Rational& r2);
bool operator!=(const Rational& r1, const Rational& r2);

Rational operator+(const Rational& r1, const Rational& r2);
Rational operator-(const Rational& r1, const Rational& r2);
Rational operator*(const Rational& r1, const Rational& r2);
Rational operator/(const Rational& r1, const Rational& r2);

#endif


