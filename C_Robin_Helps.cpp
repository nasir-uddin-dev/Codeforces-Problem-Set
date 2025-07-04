#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // 3 2
    // 3 0 0
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int curr = 0 , ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= k)
        {
            curr += a[i];
        }

        if(a[i] == 0 && curr > 0)
        {
           
            curr--;
            ans++;
        }
    }
    cout << ans << endl;;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}