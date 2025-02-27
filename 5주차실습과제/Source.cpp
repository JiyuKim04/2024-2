#include <iostream>
#include <string>
#include "Anagram.h"
using namespace std;

int  main()
{
	cout << "<Exercise 10-1 소프트웨어융합학과, 2023111429, 김지유>" << endl;
	bool isAnagram;
	
	Anagram a1("lamp", "palm");
	isAnagram = a1.isAnagram();
	cout << a1.getFirst() << " and " << a1.getSecond() << " are "
		<< (isAnagram ? "anagrams" : "not anagrams") << endl;

	Anagram a2("split", "lisp");
	isAnagram = a2.isAnagram();
	cout << a2.getFirst() << " and " << a2.getSecond() << " are "
		<< (isAnagram ? "anagrams" : "not anagrams") << endl;

	Anagram b;
	isAnagram = b.isAnagram();
	cout << "Two empty strings are "
		<< (isAnagram ? "anagrams" : "not anagrams") << endl;

	//Prompt the user to enter two string
	cout << "Enter a string s1:";
	string s1;
	cin >> s1;

	//Prompt the user to enter two string
	cout << "Enter a string s2:";
	string s2;
	cin >> s2;

	Anagram c(s1, s2);
	isAnagram = c.isAnagram();
	cout << c.getFirst() << " and " << c.getSecond() << " are "
		<< (isAnagram ? " anagrams" : " not anagrams") << endl << endl;

	return 0;
}