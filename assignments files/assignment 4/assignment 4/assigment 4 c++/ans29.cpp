// Write a program to find the sum of digits of a given number
#include <iostream>
using namespace std;

int main()
{
    int n;
    int digit;
    int sum = 0;

    cout << "enter a number: ";
    cin >> n;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    cout << "sum of digits = " << sum;

    return 0;
}