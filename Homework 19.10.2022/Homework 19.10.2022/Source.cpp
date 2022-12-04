#include <iostream>
#include <math.h>

using namespace std;

//27. A

//int main() {
//	double n;
//	double a;
//	double b;
//
//	cout << "Enter n - ";
//	cin >> n;
//
//	double sum(0);
// 
//	for (int i = 1; i <= n; ++i)
//	{
//		cout << "Enter a" << i << " - ";
//		cin >> a;
//		sum += a;
//		b = a / (1 + pow(sum, 2));
//		cout << "b(" << a << ") = " << b << endl;
//	}
//	return 0;
//}

//27. B

int main() {
	double n;
	double y;

	cout << "Enter n - ";
	cin >> n;

	double sum(0);
 
	for (int i = 1; i <= n; ++i)
	{
		cout << "Enter y[" << i << "] - ";
		cin >> y;
		if (y > 0 && y < 10)
		{
			sum += y;
		}
		else {
			cout << "Z[" << n << "] = 1";
			break;
		}
	}

	if (y > 0 && y < 10)
	{
		cout << "Z[" << n << "] = " << sum;
	}

	return 0;
}

