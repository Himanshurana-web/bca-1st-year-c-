// Find the sum of odd numbers between 1 and N
#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    cout << "sum of odd5 numbers = " << sum;

    return 0;
}