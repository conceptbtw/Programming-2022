#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int x;
    int summa=0;
    cout << "Enter the number" << endl;
    cin >> x;
    while (x!=0)
    {
        summa+=x%10;
        x=x/10;
    }
    cout << "Summa = " << summa << endl;
	return 0;
}