#include <iostream>
#include <cmath>
#include <string>
#include <list>

using namespace std;

bool IsPalindrome(int number)
{
	string numberString = to_string(number);
	int midpoint = numberString.length() / 2;

	string half1 = numberString.substr(0, midpoint);
	string half2 = numberString.substr(midpoint, midpoint * 2);

	string reversedHalf2 = half2;
	reverse(reversedHalf2.begin(), reversedHalf2.end());

	if (half1 == reversedHalf2)
	{
		return true;
	}

	return false;
}

int main()
{
	list<int> palindromes = {};
	int digits = 3;
	int min = pow(10, digits - 1);
	int max = pow(10, digits);

	for (int num1 = min; num1 < max; num1++)
	{
		for (int num2 = min; num2 < max; num2++)
		{
			int product = num1 * num2;

			if (IsPalindrome(product) && !(find(palindromes.begin(), palindromes.end(), product) != palindromes.end()))
			{
				palindromes.push_back(product);
			}
		}
	}

	palindromes.sort();

	for (int palindrome : palindromes)
	{
		cout << palindrome << "\n";
	}
}