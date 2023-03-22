#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i;
    int sum;
    sum=0;

    cin >> n;
    for (int i = 0; n >= i; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of n numbers is " << sum;
    return 0;
}