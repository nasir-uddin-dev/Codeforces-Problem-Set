#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

vector<pii> tableCells(int x, int y) {
    return {{3*x+1, 3*y+1}, {3*x+1, 3*y+2}, {3*x+2, 3*y+1}, {3*x+2, 3*y+2}};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> guests(n);
        for (int &g : guests) cin >> g;

        queue<pii> q;
        set<pii> visited;
        map<pii, int> occupancy;

        vector<pii> answer;

        q.push({0, 0});
        visited.insert({0, 0});

        int guestIdx = 0;

        while (guestIdx < n) {
            pii curr = q.front(); q.pop();
            auto coords = tableCells(curr.first, curr.second);
            pii key = {curr.first, curr.second};
            int &occ = occupancy[key];

            while (guestIdx < n && ((guests[guestIdx] == 1 && occ < 4) || (guests[guestIdx] == 0 && occ == 0))) {
                answer.push_back(coords[occ]);
                occ++;
                guestIdx++;
            }

            // Push adjacent tables (BFS)
            vector<pii> neighbors = {
                {curr.first + 1, curr.second},
                {curr.first, curr.second + 1}
            };

            for (auto& nb : neighbors) {
                if (!visited.count(nb)) {
                    visited.insert(nb);
                    q.push(nb);
                }
            }
        }

        for (auto [x, y] : answer)
            cout << x << " " << y << "\n";
    }

    return 0;
}
