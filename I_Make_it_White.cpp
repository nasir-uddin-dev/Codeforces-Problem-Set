#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int firstPos = -1, lastPos = -1;

    firstPos = s.find("B");
    lastPos = s.rfind("B");

     //cout << firstPos << " " << lastPos << endl;
    int ans = lastPos - firstPos + 1;
     cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}