#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        multiset<int > S(n), T(n);
        for(auto &x : S)
            cin >> x;

        for(auto &x : T)
            cin >> x;

        remove(S.begin());
        S.insert()
    }
    return 0;
}