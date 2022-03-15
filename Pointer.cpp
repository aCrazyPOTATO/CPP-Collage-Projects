#include <iostream>
using namespace std;

int main()
{
    int i = 56;
    int *b = &i;
    // address
    cout << "The Address of i is" << &i << endl;
    cout << "The Address of i is" << b << endl;
    // value
    cout << "The Value at address b is " << *b << endl;
    int **c = &b;
    cout << "The Address of b is" << &b << endl;
    cout << "The Address of b is" << c << endl;
    cout << "The  value at Address c  is" << *c << endl;
    cout << "The value at address value_at(value_at(c))  is " << **c << endl;
    return 0;
}