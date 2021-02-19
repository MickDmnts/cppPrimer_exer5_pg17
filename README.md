# cppPrimer_exer5_pg17
Task 1.16: Write your own version of a program that prints the sum of a set of integers read from _cin_.\
_**Based on below code sample**_
```
#include <iostream>

int main()
{
	int sum = 0, val = 0;

	std::cout << "Press CTRL+Z and then Enter to print the Sum and terminate." << std::endl;

	//read until Ent-of-File
	while (std::cin >> val)
	{
		sum += val;
	}
	std::cout << "Sum is: " << sum << std::endl;

	return 0;
}
```
