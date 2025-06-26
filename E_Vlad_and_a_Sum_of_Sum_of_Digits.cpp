#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+1;


int res[N];

int S(int x)
{
    int res = 0;
    while (x)
    {
        res += (x % 10);
        x /= 10;
    }
    return res;
}

void solve()
{
    int x;
    cin >> x;
    cout << res[x] << '\n';
}

int main()
{
    res[0] = 0;
    for (int i = 1; i < N; i++)
    {
        res[i] = res[i - 1] + S(i);
    }

    int t;
    cin >> t;
    while (t--)
        solve();
    
}