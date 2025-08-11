#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 2)
            cout << -1 << " " << n << endl;
        else if (n == 3)
            cout << -1 << " " << n <<" " << -1 << endl;
    }
    return 0;
}