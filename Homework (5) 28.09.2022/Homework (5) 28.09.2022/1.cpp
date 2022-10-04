#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int hour, min, sec;
    cout << "Enter the seconds" << endl;
    cin >> sec;
    hour = sec / 3600;
    min = (sec - hour * 3600) / 60;
    printf("Hour:%d Min:%d", hour, min);
    return 0;
}