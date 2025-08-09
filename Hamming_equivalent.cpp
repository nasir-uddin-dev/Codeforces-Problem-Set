// https://www.codechef.com/problems/P4169

#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (__builtin_popcount(a[i]) == __builtin_popcount(i + 1))
            return true;
        else
            return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool ok = solve();
        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}