// Problem Tag -> greedy/math/sorting
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // sort(a.rbegin(), a.rend());
    int sum = 0;
    for (auto val : a)
    {
        sum += abs(val);
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();
    return 0;
}