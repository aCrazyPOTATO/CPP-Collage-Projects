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
        cout <<
    }
}