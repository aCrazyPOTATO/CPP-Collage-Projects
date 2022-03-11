#include <iostream>
using namespace std;
void exchange(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 5, y = 3;
    exchange(x, y);
    cout << "After Function Call" << endl;
    cout << "X=" << x << endl;
    cout << "Y=" << y << endl;
    return 0;
}