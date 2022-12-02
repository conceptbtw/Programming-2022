//Ввести масив з n дійсних чисел.
//Посортувати і вивести його у порядку зростання, використовуючи  метод сортування «вибіркою». 
//Тобто, знаходимо найменший елемент в масиві і міняєм його місцями з першим елементом, далі робимо те саме, починаючи з другого елемента і т.д.
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter number of elements in array - ";
	cin >> n;
	cout << endl;

	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter element " << i + 1 << " - ";
		cin >> a[i];
		cout << endl;
	}

	int min = 0;
	int b = 0;

	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			min = (a[j] < a[min]) ? j : min;
		}
		if (i != min)
		{
			b = a[i];
			a[i] = a[min];
			a[min] = b;
		}
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
	cout << endl;
}