#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // cout << min(b,d) << endl;    //Gellyfist knight
    // cout << min(a, c) << endl;  //Flower knight

    if (min(a, c) >= min(b, d))
        cout << "Gellyfish" << endl;
    else
        cout << "Flower" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}