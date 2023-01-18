#include <iostream>
#include <list>
#include <cmath>

bool IsPrime(unsigned long long number)
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
	unsigned long long number = 600851475143;
	std::list<unsigned long long> primeFactors = {number};
	bool factorised = false;

	while (!factorised)
	{
		factorised = true;

		for (unsigned long long factor : primeFactors)
		{
			if (!IsPrime(factor))
			{
				factorised = false;

				for (int i = 2; i <= sqrt(factor); i++)
				{
					if (factor % i == 0)
					{
						primeFactors.remove(factor);
						primeFactors.push_back(i);
						primeFactors.push_back(factor / i);

						break;
					}
				}
			}

			else
			{
				continue;
			}

			break;
		}
	}

	for (int factor : primeFactors)
	{
		std::cout << factor << "\n";
	}

	return 0;
}