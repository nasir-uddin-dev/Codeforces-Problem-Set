#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Construct the permutation [2, 1, 3, 4, ..., n]
        vector<int> permutation;
        permutation.push_back(2);  // Start with 2
        permutation.push_back(1);  // Then 1
        for (int i = 3; i <= n; ++i) {
            permutation.push_back(i);  // Add the rest from 3 to n
        }

        // Output the permutation
        for (int i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
