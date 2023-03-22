/* Insertion In Array */

#include <bits/stdc++.h>
using namespace std;

void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
}

int main()
{
    int n;
    cin >> n;

    int A[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    display(A, n);
    return 0;
}