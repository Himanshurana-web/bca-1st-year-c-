//Write a program to print the Fibonacci series up to N terms.. 
#include <iostream>
using namespace std;

int main()
{
//     int n;
//     int a = 0;
//     int b = 1;
//     int c = 0;

//     cout << "enter number of terms: ";
//     cin >> n;

//      while (c<=n)
//     {
//         cout <<endl<< " n " << c;
//         a = b;
//         b = c;
//         c = a + b;
//     }

//     return 0;
// }
  int n;
    int a = 0;
    int b = 1;
    int c;

    cout << "enter number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}