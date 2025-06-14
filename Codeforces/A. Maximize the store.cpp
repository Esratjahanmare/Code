
#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        int sum = 0;
        for (int i = 1; i < 2 * n; i += 2) {
            sum += min(a[i], a[i - 1]);
        }

        cout << sum << endl;
    }

    return 0;
}
