#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    cin >> j;

    for (i = 1; i <= j; i++)
    {
        for (j = 1; j >= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
