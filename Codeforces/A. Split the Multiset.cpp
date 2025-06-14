#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        // If n is 1, no operations are needed since S already contains {1}
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        int operations = 0;
        while (n > 1) {
            if (n <= k) {
                operations += 1; // If n is less than or equal to k, we can directly break it into 1's in one step.
                break;
            } else {
                operations++;
                n = (n + k - 1) / k; // The next n will be ceil(n / k)
            }
        }

        cout << operations << endl;
    }

    return 0;
}
