// Write a program to calculate the factorial of a number using for loop
#include <iostream>
using namespace std;

int main()
{
    int n;
    int factorial = 1; // factorial is the product of an integer and all the positive whole numbers
                       // below it down to one

    cout << "enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    cout << "Factorial = " << factorial;

    return 0;
}