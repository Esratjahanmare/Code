#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> buckets(n);
        for (int i = 0; i < n; ++i) {
            cin >> buckets[i];
        }

        // Calculate the sum of all squares
        long long totalSquares = 0;
        for (int i = 0; i < n; ++i) {
            totalSquares += buckets[i];
        }

        // Check if the sum is even and if each bucket has an even number of squares
        if (totalSquares % 2 == 0) {
            bool canBuildSquare = true;
            for (int i = 0; i < n; ++i) {
                if (buckets[i] > totalSquares / 2) {
                    canBuildSquare = false;
                    break;
                }
            }

            if (canBuildSquare) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
