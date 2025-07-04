#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt1, cnt2;
        cin >> cnt1 >> cnt2;
        if (cnt1 % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (cnt2 % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                if (cnt1 == 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
}