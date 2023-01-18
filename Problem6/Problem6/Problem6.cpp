#include <iostream>
#include <list>
#include <cmath>

int main()
{
	const int number = 100;
	int squares[number] = {};
	int total = 0;
	int squaresTotal = 0;

	for (int i = 1; i <= number; i++)
	{
		total += i;
		squaresTotal += pow(i, 2);
	}

	int difference = abs(pow(total, 2) - squaresTotal);

	std::cout << difference;

	return 0;
}