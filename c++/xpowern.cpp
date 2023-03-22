#include <iostream>
using namespace std;
int main()
{
    int x;
    int n;
    int i;
    int power = 1;

    cout << "Enter the number" << endl;
    cin >> x;
    cout << "Enter the power" << endl;
    cin >> n;

    i = 1;
    while (i <= n)
    {
        power = power * x;
        i = i + 1;
    }
    cout << "Final value = " << power;
    return 0;
}