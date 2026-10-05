//  Write a program to check whether three sides can form a valid triangle. 
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "enter three sides: ";
    cin >> a >> b >> c;

     if (a + b > c && a + c > b && b + c > a) // the sum of two sides is greater than its thir side
    {
        cout << "valid triangle";
    }
    else
    {
        cout << "invalid triangle";
    }

    return 0;
}