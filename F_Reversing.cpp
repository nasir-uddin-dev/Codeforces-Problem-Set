#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0, j = n - 1; j < i; i++, j--)
    {

        // swapping
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}