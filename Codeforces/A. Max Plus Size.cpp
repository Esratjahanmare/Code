#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mx = 0;

        for (int j = 0; j < 2;j++) {
            int mv = 0, r = 0;
            for (int i = j; i < n; i += 2) {
                mv= max(mv, a[i]);
                r++;
            }
            mx = max(mx, mv + r);
        }

        cout << mx<< endl;
    }
}

