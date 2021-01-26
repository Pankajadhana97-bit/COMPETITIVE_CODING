#include <bits/stdc++.h>
using namespace std;
int count2sinRangeAtDigit(int number, int d)
{
	int powerOf10 = (int)pow(10, d);
	int nextPowerOf10 = powerOf10 * 10;
	int right = number % powerOf10;

	int roundDown = number - number % nextPowerOf10;
	int roundup = roundDown + nextPowerOf10;

	int digit = (number / powerOf10) % 10;
	if (digit < 2)
		return roundDown / 10;

	if (digit == 2)
		return roundDown / 10 + right + 1;
	return roundup / 10;
}
int numberOf2sinRange(int number)
{
	stringstream convert;
	convert << number;
	string s = convert.str();
	int len = s.length();
	int count = 0;
	for (int digit = 0; digit < len; digit++)
		count += count2sinRangeAtDigit(number, digit);

	return count;
}
int main()
{
	cout << numberOf2sinRange(22) << endl;
	cout << numberOf2sinRange(100);
	return 0;
}
