#include <iostream>
using namespace std;
void print(int s)
{
    cout << "Result " << s << endl;
}

int add(int x, int y)
{
    int r;
    r = y + x;
    print(r);
    return 0;
}

int main()
{
    int a, b, t;
    cin >> a >> b;
    add(a, b);
    return 0;
}
