#include <iostream>
using namespace std;

int main()
{
    // Pointer//
    int i = 56;
    int *b = &i;
    // address
    cout << "The Address of i is" << &i << endl;
    cout << "The Address of i is" << b << endl;
    // value
    cout << "The Value at address b is " << *b << endl;
    return 0;
}