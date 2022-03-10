#include <iostream>
using namespace std;
class nest
{
    int a;
    int squarenum()
    {
        return a * a;
    }

public:
    void inputnum()
    {
        cout << "\n Enter a Number:";
        cin >> a;
    }
    int cubenum()
    {
        return a * a * a;
    }
    void displaynum()
    {
        int sq = squarenum();
        int cu = cubenum();
        cout << "\n The Square Of a:" << a << sq;
        cout << "\n The Cume of a:" << a << cu;
    }
};
int main()
{
    nest n1;
    n1.inputnum();
    n1.displaynum();
}