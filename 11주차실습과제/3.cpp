#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;

const int NUMBER_OF_CARDS = 52;
string suits[4] = { "Spades", "Hearts", "DIamonds", "Clubs" };
string ranks[13] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

int main()
{
	vector<int> deck(NUMBER_OF_CARDS);
	for (int i = 0; i < NUMBER_OF_CARDS; i++)
		deck[i] = i;

	srand(time(0));
	random_shuffle(deck.begin(), deck.end());

	for (int i = 0; i < 4; i++)
	{
		cout << ranks[deck[i] % 13] << "of" <<
			suits[deck[i] / 13] << endl;
	}
	return 0;
}