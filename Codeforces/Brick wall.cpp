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

        vector<int> a(n), b(n);

        // Read input permutations
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        // Sort both permutations to minimize inversions
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // Print the resulting permutations
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
