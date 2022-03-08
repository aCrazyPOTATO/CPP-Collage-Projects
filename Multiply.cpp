#include <iostream>
using namespace std;

int main()
{
    int i = 7, j = 1, k;
    for (j = 1; j <= 10; j++)
    {
        k = i * j;
        cout << i << "*" << j << "=" << k << endl;
    }
}