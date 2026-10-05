// Write a program to check whether a given number is a palindrome.
#include <iostream>
using namespace std;

int main()
{
    int n;
    int original;
    int reverse = 0;
    int digit;

    cout << "enter a number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
    {
        cout << "palindrome number";
    }
    else
    {
        cout << "not a palindrome number";
    }

    return 0;
}