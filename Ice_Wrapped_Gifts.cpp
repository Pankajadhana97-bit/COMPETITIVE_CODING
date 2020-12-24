#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int n;
	cin >> n;
	int val= 2 * n - 1;
	for (int i = 0;i<(val/2)+1; i++)
	{
		int val1 = n;
		for (int j = 0; j < i; j++)
		{
			cout << val1 << " ";
			val1--;
		}
		for (int k = 0; k < val- 2 * i; k++)
			cout << n - i << " ";
		val1 = n - i + 1;
		for (int l = 0; l < i; l++)
		{
			cout << val1 << " ";
			val1++;
		}

		cout << endl;
	}

	for (int i = val/ 2 - 1; i >= 0; i--)
	{
		int val1 = n;
		for (int j = 0; j < i; j++)
		{
			cout << val1 << " ";
			val1--;
		}

		for (int k = 0; k < val- 2 * i; k++)
		{
			cout << n - i << " ";
		}
		val1 = n - i + 1;
		for (int l = 0; l < i; l++)
		{
			cout << val1 << " ";
			val1++;
		}
		cout << endl;
	}
	return 0;
}