#include <iostream>
#include <string>
#include "RationalWithOperators.h"
using namespace std;

int main()
{
	Rational r1(4, 2);
	Rational r2(2, 3);

	cout << r1 << ">" << r2 << "is" <<
		((r1 > r2) ? "true" : "false") << endl;
	cout << r1 << "<" << r2 << "is" <<
		((r1 > r2) ? "true" : "false") << endl;
	cout << r1 << "==" << r2 << "is" <<
		((r1 == r2) ? "true" : "false") << endl;
	cout << r1 << "!=" << r2 << "is" <<
		((r1 != r2) ? "true" : "false") << endl;

	cout << r1 << " + " << r2 << " = " << r1 + r2 << endl;
	cout << r1 << " - " << r2 << " = " << r1 - r2 << endl;
	cout << r1 << " * " << r2 << " = " << r1 * r2 << endl;
	cout << r1 << " / " << r2 << " = " << r1 / r2 << endl;

	Rational r3(1, 2);
	r3 += r1;
	cout << "r3 is " << r3 << endl;

	Rational r4(1, 2);
	r4[0] = 3; r4[1] = 4;
	cout << "r4 is " << r4 << endl;

	r3 = r4++;
	cout << "r3 is " << r3 << endl;
	cout << "r4 is " << r4 << endl;

	cout << "1 + " << r4 << " is " << (1 + r4) << endl;

	return 0;

}