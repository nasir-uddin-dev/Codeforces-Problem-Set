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

        deque<int> freq(n + 1, 0);
        string s;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            s += char('a' + freq[x]);
            freq[x]++;
        }

        cout << s << endl;
    }
    return 0;
}