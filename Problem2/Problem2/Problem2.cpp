#include <iostream>
#include <list>

int main()
{
	int currentValue = 0;
	int value1 = 1;
	int value2 = 2;
	int limit = 4000000;
	std::list<int> fibonaccis = { value2 };

	while (currentValue <= limit)
	{
		currentValue = value1 + value2;
		value1 = value2;
		value2 = currentValue;

		if (currentValue % 2 == 0 && currentValue <= limit)
		{
			fibonaccis.push_back(currentValue);
		}
	}

	int total = 0;

	for (int even : fibonaccis)
	{
		total += even;
	}

	std::cout << total;

	return 0;
}