#include <iostream>
using namespace std;
int main()
{
    {
        float r, area;
        cout << "Enter the Radius of circle:";
        cin >> r;
        area = (3.14) * (r * r);
        cout << "Area of Circle : " << area << endl;
    }
    {
        float l, b, area;
        cout << "Enter the Length anf breadth rectangle:";
        cin >> l >> b;
        area = l * b;
        cout << "The Area of Rectangle is:" << area;
        cout << "\n";
    }
    {
        float b, h, area;
        cout << "Enter Height and Length of triangle: ";
        cin >> b >> h;
        area = (b * h) / 2;
        cout << "The Area of Triangle is: " << area;
    }
}