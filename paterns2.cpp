#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    cin >> j;

    for (i = j; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
