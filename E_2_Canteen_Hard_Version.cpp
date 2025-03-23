#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        // Strategy: Try to find minimum rounds by binary search
        auto simulate = [&](ll rounds) -> bool {
            vector<ll> a_copy = a, b_copy = b;
            ll total_reduce = 0;

            for (ll r = 0; r < rounds; ++r) {
                for (int i = 0; i < n; ++i) {
                    ll take = min(a_copy[i], b_copy[i]);
                    a_copy[i] -= take;
                    b_copy[i] -= take;
                }

                vector<ll> new_a(n);
                for (int i = 0; i < n; ++i) {
                    new_a[i] = a_copy[(i - 1 + n) % n];
                }
                a_copy = new_a;
            }

            ll remaining_sum = accumulate(a_copy.begin(), a_copy.end(), 0LL);
            return remaining_sum <= k;
        };

        // Binary search on the number of rounds
        ll left = 0, right = 1e14, answer = -1;
        while (left <= right) {
            ll mid = (left + right) / 2;
            if (simulate(mid)) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << answer << "\n";
    }
    return 0;
}
