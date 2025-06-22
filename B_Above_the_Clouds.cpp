#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    if (n % 2 != 0) // odd
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << s[n - 1] << endl;
        }
    }
    else
       
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}