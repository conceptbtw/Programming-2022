#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() 
{
	//Task 1
	/*
	for (int i = 0; i <= 100; i++)
	{
		cout << i << "C " << 9.0 / 5.0 * i + 32 << "F " << endl;
	}
	*/

	//Task 2
	/*
	int m = 0;
	cout << "M = ";
	cin >> m;
	int k = 0;
	while (pow(4, k) < m)
	{
		k = k + 1;
	}
	cout << "K = " << k - 1 << endl;
	cout << pow(4, k-1) << endl;
	cout << pow(4, k) << endl;
	*/

	//Task 3
	/*
	int n;
	cout << "Enter N = ";
	cin >> n;
	int u0 = 0, u1 = 1, u;
	cout << u0 << endl;
	cout << u1 << endl;
	for (int i = 2; i <= n; i++)
	{
		u = u0 + u1;
		cout << u << endl;
		u0 = u1;
		u1 = u;
	}
	*/
	//Task 4
	/*
	string s;
	long long n;
	cin >> s;
	n = s.size();
	for (int i = n; i >= 0; i--)
	{
		cout << s[i];
	}
	cout << endl;
	*/

	/*
	unsigned long long n, b;
	long long a;
	cin >> n;
	b=0
	while (n > 0)
	{
		n % 10;
		n /= 10;
		b *= 10;
		b += a;
	}
	cout << b << endl;
	*/

	//Task 5

	long long a, b;
	cin >> a >> b;
	while (a != 0 and b != 0)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b=b%a;
		}
	}
	cout << a + b << endl;

	return 0;
}