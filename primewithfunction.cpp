#include <iostream>
using namespace std;
int prime(int x)
{
    bool temp = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            cout << "Its not Prime Number!" << endl;
            temp = 1;
            break;
        }
    }
    if (temp == 0)
    {
        cout << "Its Prime Number" << endl;
    }
}
int main()
{
    int a;
    cout << "Enter Number to check whether its prime number or not?" << endl;
    cin >> a;
    prime(a);
};