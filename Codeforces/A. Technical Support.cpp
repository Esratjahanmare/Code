#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;  cin >> n;
        string s;  cin >> s;

        int unans = 0;
        bool valid = true;

        for (char c : s) {
            if (c == 'Q') {
                unans++;
            } else if (c == 'A') {
                if (unans > 0) {
                    unans--;
                } else {
                    valid = false;
                    break;
                }
            }
        }

        if (unans > 0) valid = false;
        cout << (valid ? "Yes" : "No") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
