#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	int numArray[] = { 1, 2, 3, 4, 5, 6 };
	int size = std::size(numArray);
	int result = p.biggerOrSmaller(size, numArray, 46);

	bool res = p.checkForRepeatingNum(size, numArray);

	assert(p.biggerOrSmaller(size, numArray, 46)== -1);//check if number is between 1-46
	assert(p.checkForRepeatingNum(size, numArray) == false);//check for repeating numbers

	cin.get();
}