#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        // Calculate the number of moves required
        long long total_moves = (x + y + k - 1) / k; // Equivalent to ceil((x + y) / k)

        cout << total_moves << endl;
    }

    return 0;
}
