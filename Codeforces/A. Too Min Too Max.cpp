#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_diff = -1, min_diff = 1e6;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                max_diff = max(max_diff, abs(a[i] - a[j]));
                min_diff = min(min_diff, abs(a[i] - a[j]));
            }
        }

        cout << 2 * (max_diff - min_diff) << endl;
    }

    return 0;
}
