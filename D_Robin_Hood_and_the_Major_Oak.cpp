#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int x = k / 2;
    // cout << x << endl;
    //  0
    //  0
    //  1
    //  1
    //  2
    if (n % 2 && k % 2)
    {
        x++;
    }

    x % 2 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    // 1
    // 0
    // 1
    // 1
    // 2
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}