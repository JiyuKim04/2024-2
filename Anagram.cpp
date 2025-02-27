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
		return false; // �� �� ��������� �ֳʱ׷��� �ƴ�
	}
	string sortedFirst = first;  // ���� ���ڿ��� ����
	string sortedSecond = second; // ���� ���ڿ��� ����

	stringSort(sortedFirst);
	stringSort(sortedSecond);
	return sortedFirst == sortedSecond; // ���ĵ� ���ڿ� ��

}

void Anagram::stringSort(string & s)
{

	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	std::sort(s.begin(), s.end());
}
