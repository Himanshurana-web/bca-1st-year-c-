// Write a program to check whether a given number is divisible by 5 and 11
#include <iostream>
using namespace std;

int main()
{
    int f;

    cout << "enter a number: ";
    cin >> f;

    if (f % 5 == 0 && f % 11 == 0)
    {
        cout << "number is divisible by 5 and 11";
    }
    else
    {
        cout << "number is not divisible by 5 and 11";
    }

    return 0;
}