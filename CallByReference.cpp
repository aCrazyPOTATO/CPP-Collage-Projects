#include <iostream>
using namespace std;
void swap(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int a, b;
    cout << "Enter Two Numbers:" << endl;
    cin >> a >> b;
    cout << "Before Swaping" << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    swap(a, b);
    cout << "\n After Swaping" << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
}