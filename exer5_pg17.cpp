#include <iostream>

//Task 1.16

int sum = 0; //Global score variable

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

int main()
{
	ReadInput();

	int sum = ReturnSum();
	std::cout << "The sum is: " << sum << std::endl;

	return 0;
}