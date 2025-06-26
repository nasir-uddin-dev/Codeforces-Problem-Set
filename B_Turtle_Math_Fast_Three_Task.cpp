#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] % 3 == 1)
            ok = true;
    }

    if (sum % 3 == 0)
        cout << 0 << endl;
    else if (sum % 3 == 2)
        cout << 1 << endl;
    else
    {
        if (ok == true)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}