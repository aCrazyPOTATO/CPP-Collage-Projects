#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, temp = 0, s = 0;
    cin >> n;
    n = temp;
    while (n > 0)
    {
        int lastdigit = n % 10;
        s = s + pow(lastdigit, 3);
        n = n / 10;
    }
    if (s == temp)
    {
        cout << " its armgstrong";
    }
    else
    {
        cout << "Its not armgstrong";
    }
}