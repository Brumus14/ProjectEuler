#include <iostream>

using namespace std;

bool IsDivisible(int number, int max)
{
	for (int i = 2; i <= max; i++)
	{
		if (number % i != 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int number = 1;
	int max = 20;

	while (!IsDivisible(number, max))
	{
		number++;
	}

	cout << number;
}
