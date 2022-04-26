// Operators"
#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b;
    b = ++a + a++ + a-- + --a;
    cout << a << "\t" << b;
}