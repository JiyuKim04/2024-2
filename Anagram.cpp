#include <iostream>
#include "Anagram.h"
#include <algorithm>
#include <cctype>

using namespace std;


Anagram::Anagram()
{
	string Empty = "";
}

Anagram::Anagram(string s1, string s2)
{
	first = s1;
	second = s2;
}

string Anagram::getFirst()
{
	return first;
}

string Anagram::getSecond()
{
	return second;
}

bool Anagram::isAnagram()
{
	if (first.empty() && second.empty()) {
		return false; // 둘 다 비어있으면 애너그램이 아님
	}
	string sortedFirst = first;  // 원래 문자열을 복사
	string sortedSecond = second; // 원래 문자열을 복사

	stringSort(sortedFirst);
	stringSort(sortedSecond);
	return sortedFirst == sortedSecond; // 정렬된 문자열 비교

}

void Anagram::stringSort(string & s)
{

	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	std::sort(s.begin(), s.end());
}
