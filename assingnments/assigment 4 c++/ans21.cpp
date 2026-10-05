// Write a program to print the sum of first N natural numbers
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "sum of n number is  = " << sum;

    return 0;
}
