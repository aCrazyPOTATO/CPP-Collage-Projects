#include <iostream>
using namespace std;
class nest
{
    int a;
    int sq()
    {
        return a * a;
    };
    int cu()
    {
        return a * a * a;
    };

public:
    void inputnum()
    {
        cout << "\n Enter a Number:";
        cin >> a;
    };

    void displaynum()
    {
        cout << "\n The Square Of a:" << sq();
        cout << "\n The Cube of a:" << cu();
    }
};
int main()
{
    nest n1;
    n1.inputnum();
    n1.displaynum();
}