#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;

    if (a > 0)
    {
        cout << "THE NUMBER IS POSITIVE" << endl;
    }
    else if (a < 0)
    {
        cout << " THE NUMBER IS NEGATIVE" << endl;
    }
    else
    {
        cout << "THE NUMBER IS 0" << endl;
    }
}