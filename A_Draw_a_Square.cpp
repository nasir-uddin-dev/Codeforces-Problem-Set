#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int flag = 0;
    while (t--)
    {
        int l, r, u, d;
        cin >> l >> r >> u >> d;
       
        if (l == r && u == d)
            flag = 1;
        break;
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}