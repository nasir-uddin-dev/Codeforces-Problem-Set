#include <bits/stdc++.h>
using namespace std;

bool isPossible(const vector<string> &grid, int n, int m)
{
    vector<bool> fullRow(n, true), fullCol(m, true);

    // Check which rows and columns are completely filled with '1'
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == '0')
            {
                fullRow[i] = false;
                fullCol[j] = false;
            }
        }

    // Check each '1' cell: it must be in a fully filled row or column
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (grid[i][j] == '1')
                if (!fullRow[i] && !fullCol[j])
                    return false;

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
            cin >> grid[i];

        bool result = isPossible(grid, n, m);
        cout << (result ? "YES" : "NO") << '\n';
    }

    return 0;
}
