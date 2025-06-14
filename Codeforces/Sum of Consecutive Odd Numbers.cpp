#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, mm, mn, i, sum = 0, ma, mi;
    cin >> n;
    for (int j = 1; j <= n; j++) {
        sum = 0;
        cin >> mm >> mn;
        ma = max(mm, mn);
        mi = min(mm, mn);
        for (i = mi+1; i < ma; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
