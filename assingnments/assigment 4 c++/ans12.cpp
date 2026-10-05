//  Write a program to perform calculator operations (+, -, *, /) using switch.
#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;

    cout << "enter two numbers: ";
    cin >> a >> b;

    cout << "enter operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
        case '+':
        {
            cout << "result = " << a + b;
            break;
        }

        case '-':
        {
            cout << "result = " << a - b;
            break;
        }

        case '*':
        {
            cout << "result = " << a * b;
            break;
        }

        case '/':
        {
            cout << "result = " << a / b;
            break;
        }

        default:
        {
            cout << "invalid operator";
        }
    }

    return 0;
}