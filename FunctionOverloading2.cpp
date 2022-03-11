#include <iostream>
using namespace std;
int area(int a, int b)
{
    return (a * b);
}
int area(int l)
{
    return (l * l);
}
int main()
{
    int s, r, l, b;
    cout << "Enter Length and Breadth of Rectangle:" << endl;
    cin >> l >> b;
    r = area(l, b);
    cout << "Enter Length of a side of a square:" << endl;
    cin >> l;
    s = area(l);
    cout << "Area of rectangle :" << r << endl;
    cout << "Area of Square:" << s << endl;
    return 0;
}