#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int a = 0, b = 0;
    for (auto c : s)
    {
        if (c == 'A')
            a++;
        else
            b++;
    }

    // cout << a << " " << b << endl;
    if (a > b)
        cout << 'A' << endl;
    else
        cout << "B" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}