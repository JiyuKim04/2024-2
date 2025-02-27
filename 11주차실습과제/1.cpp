#include <iostream>
#include <string>
#include "GenericStack.h"
using namespace std;

template<typename T>
void printStack(Stack<T>& stack)
{
	while (!stack.empty())
		cout << stack.pop() << " ";
	cout << endl;
}
int main()
{
	Stack<int> intStack;
	for (int i = 0; i < 10; i++)
		intStack.push(i);
	printStack(intStack);


	Stack<string> stringStack;
	stringStack.push("Chicago");
	stringStack.push("Denver");
	stringStack.push("London");
	printStack(stringStack);

	return 0;
}