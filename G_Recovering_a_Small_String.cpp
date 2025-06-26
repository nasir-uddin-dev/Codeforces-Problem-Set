#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sz = 26;
    cin >> n;

    string mins = "zzz", curr;

    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            for (int k = 0; k < sz; k++)
            {
                if (i + j + k + 3 == n)
                {
                    curr += (i + 'a');
                    curr += (j + 'a');
                    curr += (k + 'a');
                    mins = min(curr, mins);
                }
            }
        }
    }

    cout << mins << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}