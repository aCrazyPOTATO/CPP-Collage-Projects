#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    c = 0;
    cin >> a;
    while (a > 0)
    {
        b = a % 10;
        c = c * 10 + b;
        a = a / 10;
    }
    cout << c;
}