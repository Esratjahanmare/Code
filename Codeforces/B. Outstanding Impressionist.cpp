#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

struct Impression {
    int l, r, index;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Impression> impressions(n);
        for (int i = 0; i < n; ++i) {
            cin >> impressions[i].l >> impressions[i].r;
            impressions[i].index = i;
        }

        // Sort by range [l, r]
        sort(impressions.begin(), impressions.end(), [](const Impression &a, const Impression &b) {
            return a.l < b.l || (a.l == b.l && a.r < b.r);
        });

        set<int> active;
        vector<int> result(n, 0);

        for (const auto &imp : impressions) {
            auto it = active.lower_bound(imp.l);
            if (it == active.end() || *it > imp.r) {
                result[imp.index] = 1;
            }
            active.insert(imp.r);
        }

        for (int i = 0; i < n; ++i) {
            cout << result[i];
        }
        cout << "\n";
    }

    return 0;
}

