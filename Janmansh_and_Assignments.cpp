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
        int start_time;
        cin >> start_time;

        if (start_time > 7)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}