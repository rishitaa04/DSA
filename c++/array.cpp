#include <iostream>
using namespace std;

int main()
{
    int dost[5] = {2, 3, 4, 5, 6};

    cout << "Value at 0 index : " << dost[1] << endl;

    cout << "Value at 20 index : " << dost[20] << endl;

    int second[3] = {5, 7, 9};

    cout << "Value at 8th index : " << second[0] << endl;

    cout << "All good " << endl;

    int third[8] = {2, 9};

    cout << "Value at 0 index : " << third[0] << endl;

    int n = 7;
    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }

    int fourth[10] = {0};
    n = 15;
    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fourth[i] << " ";
    }
    /* initializing all location with 1 isn't possible */
    int fifth[10] = {1};
    n = 10;
    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fifth[i] << " ";
    }

    cout << endl
         << " All good " << endl;

    return 0;
}
