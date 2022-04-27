#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    bool test = 0;
    cout << "Enter the number to check  wheather its prime or not:" << endl;
    cin >> a;
    for (b = 2; b < a; b++)
    {
        if (a % b == 0)
        {
            cout << "Its not Prime number";
            test = 1;
            break;
        }
    }
    if (test == 0)
    {
        cout << "Its Prime";
    }
}