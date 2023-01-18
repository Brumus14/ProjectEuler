#include <iostream>
#include <list>

int main()
{
	std::list<int> multiples = {};

	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			multiples.push_back(i);
		}
	}

	int total = 0;

	for (int multiple : multiples)
	{
		total += multiple;
	}

	std::cout << total;

    return 0;
}