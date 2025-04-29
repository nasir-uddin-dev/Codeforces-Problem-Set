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
        int n, x;
        cin >> n >> x;

        if (n % 6 == 0)
            cout << (n / 6) * x << endl;
        else
            cout << (n / 6 + 1) * x << endl;
    }
    return 0;
}