// https://codeforces.com/contest/2131/problem/A

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

        int more = 0;
        for (int i = 0; i < n; i++)
            more += max(0, a[i] - b[i]);

        cout << more + 1 << endl;
    }
    return 0;
}