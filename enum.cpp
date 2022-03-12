#include <iostream>
using namespace std;
enum week
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thrusday,
    Friday,
    Saturday,
};
int main()
{
    week today;
    today = Wednesday;
    cout << "Day= " << today;
}