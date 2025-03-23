#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y, a;
        cin >> x >> y >> a;

        double depth = a + 0.5;
        long long k = (long long)(depth) / (x + y);
        double dug = k * (x + y);

        if (dug + x > depth)
        {
            cout << "NO\n"; // Little B digs it up
        }
        else
        {
            cout << "YES\n"; // Little K digs it up
        }
    }
    return 0;
}
