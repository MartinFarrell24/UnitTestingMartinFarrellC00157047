#include "Production.h"
#include<iostream>
#include<time.h>
#include <cstdlib>

int main()
{
	Production p;
	srand(time(NULL));
	const int MAX_SIZE = 6;
	int generatedNum;
	const int BIGGEST_NUM = 47;
	int lotteryArray[MAX_SIZE] = { 0, 0, 0, 0, 0, 0 };

	for (int i = 0; i < MAX_SIZE; i++)
	{
		generatedNum = rand() % 46 + 1;
		while (generatedNum == lotteryArray[0] || generatedNum == lotteryArray[1] || generatedNum == lotteryArray[2] ||
			generatedNum == lotteryArray[3] || generatedNum == lotteryArray[4] || generatedNum == lotteryArray[5])
		{
			generatedNum = rand() % 46 + 1;
		}
		lotteryArray[i] = generatedNum;
	}
	int num = p.biggerOrSmaller(MAX_SIZE, lotteryArray, BIGGEST_NUM);
	bool repeat = p.checkForRepeatingNum(MAX_SIZE, lotteryArray);
	if(num != -1);
	{
		std::cout << num + "is outside the parameters(1-46)" << std::endl;
	}
	if (repeat)
	{
		std::cout << "There's a repeated number"<<std::endl;
	}
	
	for (int i = 0; i < MAX_SIZE; i++)
	{
		std::cout << lotteryArray[i] <<std::endl;
	}
	std::system("pause");

	return 0;
}
