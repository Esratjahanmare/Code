#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        vector<int> remainder_count(3, 0); // To count the number of elements with each remainder modulo 3

        // Input array elements and compute initial sum
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
            remainder_count[a[i] % 3]++; // Count elements with different remainders
        }

        int ans = 0;
        int target = sum % 3; // Target remainder

        // If the sum is already divisible by 3, no moves are needed
        if (target == 0) {
            cout << "0\n";
            continue;
        }

        // If the sum is not divisible by 3, we need to adjust it
        int diff = target;
        // Case 1: If we have elements with remainder == target, remove one of them
        while (diff > 0) {
            if (remainder_count[diff] > 0) {
                remainder_count[diff]--;
                ans++;
                break;
            }
            diff = (diff + 3 - 1) % 3; // Decrementing the remainder
            ans++;
        }

        // If we still have a non-zero remainder, we need to remove two elements with different remainders
        if (diff > 0) {
            ans += 2;
        }

        cout << ans << endl;
    }

    return 0;
}
