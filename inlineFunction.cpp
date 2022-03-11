#include <iostream>
using namespace std;
inline void sum(int a, int b)
{
    int s;
    s = a + b;
    cout << "Sum:" << s << endl;
}
int main()
{
    int x, y;
    cout << "Enter Two Numbers:" << endl;
    cin >> x >> y;
    sum(x, y);
    return 0;
}