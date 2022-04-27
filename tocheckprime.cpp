#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the number to check  wheather its prime or not:" << endl;
    cin >> a;
    if (a / 2 == 0)
    {
        cout << "Its  Prime number";
    }
    else
    {
        cout << "Its not prime number!";
    }
}