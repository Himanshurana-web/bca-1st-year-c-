// Write a program to find the absolute value of a number. 
#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "enter a number: ";
    cin >> a;

    if (a < 0)
    {
        a = -a;
    }

    cout << "absolute value = " << a;

    return 0;
}