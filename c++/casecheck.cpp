/* CASE CHECK */

#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;

    if (a >= 'A' && a <= 'Z')
    {
        cout << "Uppercase" << endl;
    }

    else if (a >= 'a' && a <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else
    {
        cout << "Not an alphabet" << endl;
    }
}
