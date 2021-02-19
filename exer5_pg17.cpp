#include <iostream>

//Task 1.16

int sum = 0; //Global scope variable

int ReturnSum()
{
	return sum;
}

void IncreaseSum(int value)
{
	sum += value;
}

void ReadInput()
{
	int input = 0;

	while (std::cin >> input)
	{
		IncreaseSum(input);
	}
}

void PrintInstructions()
{
	std::cout << "Press CTLR+Z and then Enter to print sum and terminate." << std::endl;
}

int main()
{
	PrintInstructions();

	ReadInput();

	int sum = ReturnSum();
	std::cout << "The sum is: " << sum << std::endl;

	return 0;
}