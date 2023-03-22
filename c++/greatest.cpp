#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "Larger number is : " << a;
    }
    else if (b > a && b > c)
    {
        cout << "Larger number is : " << b;
    }
    else
    {
        cout << "larger no. is" << c;
    }

    return 0;
}