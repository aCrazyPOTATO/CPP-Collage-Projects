#include <iostream>
using namespace std;

int f(int a)
{
    int t1 = 0, t2 = 1, t3, tn;
    for (int i = 1; i <= a; i++)
    {
        cout << t1 << endl;
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
    }
}
int main()
{
    int q;
    cin >> q;
    f(q);
}