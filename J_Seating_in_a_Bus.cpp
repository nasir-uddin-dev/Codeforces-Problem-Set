#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int left = a[0], right = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] + 1 == left)
            left = a[i];
        else if (a[i] - 1 == right)
            right = a[i];
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}