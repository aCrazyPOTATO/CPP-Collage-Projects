#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a;
    b = a / 100;
    cout << b << "\n";
    c = (a % 100) / 10;
    cout << c << "\n";
    d = (c % 10);
    cout << d << "\n";
}