// Write a program to check whether a character is uppercase, lowercase, digit, or special character.
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "uppercase";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase";
    }
    else if (ch>= '0' && ch<= '9')
    {
        cout << "digit";
    }
    else
    {
        cout << "special character";
    }

    return 0;
}