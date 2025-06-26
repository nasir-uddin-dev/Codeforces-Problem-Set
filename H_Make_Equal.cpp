#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        long long k = sum / n;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < k)
            {
                flag = false;
                break;
            }
            long long extra = a[i] - k;
            a[i] = k;
            a[i + 1] += extra;
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}