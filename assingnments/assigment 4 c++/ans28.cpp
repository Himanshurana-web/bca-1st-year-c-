// Write a program to display all prime numbers between two given numbers.
#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "enter two numbers: ";
    cin >> start >> end;

    for (int n = start; n <= end; n++)
    {
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            cout << n << " ";
        }
    }

    return 0;
}