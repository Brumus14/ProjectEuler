#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int addTo = 1000;

	for (int a = 1; a < addTo; a++)
	{
		for (int b = a + 1; b < addTo; b++)
		{
			for (int c = b + 1; c < addTo; c++)
			{
				if (a + b + c == 1000 && pow(a, 2) + pow(b, 2) == pow(c, 2))
				{
					cout << a * b * c;
				}
			}
		}
	}
}
