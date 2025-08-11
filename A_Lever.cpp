//https://codeforces.com/contest/2131/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (auto &x : a)
            cin >> x;

        for (auto &x : b)
            cin >> x;

        int cnt1, cnt2;
        int mx;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] > b[j] || a[i] < b[j])
                {
                    a[i]--;
                    a[i]++;
                }
                else if(a[i] == b[j])
                {
                    a[i] = 1;
                }
            }
            mx = min(a[i], a[i]);
        }

        cout << mx << endl;
    }
    return 0;
}