#include <iostream>
using namespace std;
int mul(int a, int b)
{
    return (a * b);
}
float mul(float a, float b)
{
    return (a * b);
}
int main()
{
    int x, y;
    float m, n;
    cout << "Enter two Integers:" << endl;
    cin >> x >> y;
    cout << "Enter Two Floats:" << endl;
    cin >> m >> n;
    cout << "The Product of Integers:" << mul(x, y);
    cout << "\n";
    cout << "The Poduct of Floats:" << mul(m, n);
    return 0;
}