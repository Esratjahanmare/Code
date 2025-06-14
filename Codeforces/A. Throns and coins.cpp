
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxCoins(int n, string path) {
    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        dp[i] = dp[i - 1];
        if (path[i - 1] == '@') {
            dp[i] = max(dp[i], dp[max(0, i - 2)] + 1);
        }
    }

    return dp[n];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string path;
        cin >> path;

        cout << maxCoins(n, path) << endl;
    }

    return 0;
}
