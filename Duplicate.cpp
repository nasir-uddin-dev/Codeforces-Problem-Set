#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long int> v(n + 1);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j *= 2)
            if (v[i] == v[j])
            {
                flag = 1;
                break;
            }
        if (flag == 1)
            break;
    }

    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}