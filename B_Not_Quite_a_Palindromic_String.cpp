#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    bool ok = false;
    for (int i = 1, j = n; i <= j; i++, j--)
    {
        if (s[i] == s[n - i + 1]) // s[1] ==s[6]
        {
            ok = true;
        }
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