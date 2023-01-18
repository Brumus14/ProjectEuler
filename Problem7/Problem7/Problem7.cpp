#include <iostream>
#include <list>

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
	list<int> primes = {};
	int primeNumber = 10001;
	int currentNumber = 1;

	while (primes.size() != primeNumber)
	{
		if (IsPrime(currentNumber))
		{
			primes.push_back(currentNumber);
		}

		currentNumber++;
	}

	cout << primes.back();
}
