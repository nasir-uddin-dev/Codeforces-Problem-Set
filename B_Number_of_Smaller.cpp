#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int cnt = 0;
    for (int i = 0; i < m; i++) // m integers bi elements the second array
    {
        for (int j = 0; j < n; j++) // n integers ai elements the first array
        {
            if (a[j] < b[i]) // Whether the first array elements is strictly less than the second arra
            {
               b[j] += cnt;
            }
            else
                break; // Otherwise, break
        }
    }

    for (int i = 0; i < m; i++)
        cout << b[i] << endl;
    return 0;
}