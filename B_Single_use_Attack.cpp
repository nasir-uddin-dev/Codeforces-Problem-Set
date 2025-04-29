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
        int h, x, y;
        cin >> h >> x >> y;

        h = h - y;

        int cnt = 0;
        cnt++;
        if(h<=0)
        {
            cout << cnt << endl;
            continue;
        }
        while(h>0)
        {
            h = h -x;
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}