#include <iostream>

using namespace std;

bool IsPrime(int number)
{
	if (number == 1)
	{
		return false;
	}

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	unsigned long long sum = 0;
	int max = 2000000;

	for (int i = 1; i < max; i++)
	{
		if (IsPrime(i))
		{
			sum += i;
		}
	}

	cout << sum;
}