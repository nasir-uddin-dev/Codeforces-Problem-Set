#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    set<int> sizes;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int sz = 0;
        for (auto &i : s)
        {
            sz += (i == '1');
        }
        if (sz)
            sizes.insert(sz);

        // cout << sz << " ";
    }
    //cout << sizes.size() << endl;
    if (sizes.size() > 1)
        cout << "TRIANGLE" << endl;
    else
        cout << "SQUARE" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}