#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        // The minimum number of rounds required
        int rounds = 0;

        // While a[i] is not all zero, perform the reduction operation
        while (true) {
            // Check if all elements in `a` are 0
            bool allZero = true;
            for (int i = 0; i < n; ++i) {
                if (a[i] > 0) {
                    allZero = false;
                    break;
                }
            }
            if (allZero) break;

            rounds++; // One more round

            // Minimize a[i] by b[i]
            vector<int> next_a(n);
            for (int i = 0; i < n; ++i) {
                int reduce = min(a[i], b[i]);
                a[i] -= reduce;
                b[i] -= reduce;
                next_a[i] = a[i];
            }

            // We do not need to actually shift the array, we just need to compute the new a
            // Calculate the next array based on the cyclic shift logic
            vector<int> cyclic_a(n);
            for (int i = 0; i < n; ++i) {
                cyclic_a[i] = next_a[(i - 1 + n) % n];
            }
            a = cyclic_a; // Assign the newly calculated cyclic array
        }

        cout << rounds << "\n";
    }

    return 0;
}
