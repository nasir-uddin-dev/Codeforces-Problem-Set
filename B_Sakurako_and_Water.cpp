#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    // I have taken 2D matrix array which contains n*n size values
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << a[i + j][j] << " ";     // 1 1 -1 main diagonal
    //     }
    //     cout << endl;
    // }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int mn = 0;
        for (int j = 0; j < n - i; j++)
        {

            // cout << (i+j) <<" " << j <<" ";
            // cout << a[i + j][j] << " ";
            // 1 1 -1
            //-2 0
            // 0

            mn = min(mn, a[i + j][j]);
            // -1
            // -2
            // 0
        }
        ans += max(0, -mn); // 3
    }

    for (int j = 1; j < n; j++)
    {
        int mn = 0;
        for (int i = 0; i < n - j; i++)
        {
            // cout << i << " " << j + i << " ";
            // (0,1) (1,2)
            //(0,2)
            mn = min(mn, a[i][i + j]);
            //-1
            // 0
        }
        ans += max(0, -mn); // 1
    }
    cout << ans;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}