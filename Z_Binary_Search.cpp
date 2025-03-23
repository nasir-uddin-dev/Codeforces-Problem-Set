#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> vec(n + 1);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    while (q--)
    {
        int x;
        cin >> x;
        int flag = 0;
        int l = 0;
        int r = n - 1;
        for (int i = l; i <= r; i++)
        {

            int mid = (l + r) / 2;
            if (vec[mid] == x)
                flag = 1;
            else if (vec[mid] > x)
                l = mid + 1;
            else
                r = mid - 1;
        }

        if (flag == 1)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}