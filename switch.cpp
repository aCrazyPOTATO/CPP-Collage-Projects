#include <iostream>
using namespace std;

int main()
{
    char operation;
    int a, b;
    cout << "Enter Two numbers:" << endl;
    cin >> a >> b;
    cout << "Choose Which operation you want to perform?" << endl;
    cout << "s: Sum \n d:Difference \n m: Multiply \n div:Division" << endl;
    cin >> operation;

    switch (operation)
    {
    case 's':
        cout << "Sum of two numbers is:" << a + b << endl;
        break;
    case 'd':
        cout << "Difference of two numbers is:" << a - b << endl;
        break;
    case 'm':
        cout << "Product of two numbers is:" << a * b << endl;
        break;
    case 'q':
        cout << "Division of two numbers is:" << a / b << endl;
        break;

    default:
        cout << "Error Input" << endl;
        break;
    }
}