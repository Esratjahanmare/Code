#include <iostream>
#include <vector>
using namespace std;

int findUniqueIndex(const vector<int>& arr) {
    int n = arr.size();
    int uniqueIndex = -1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            // Element at index i is not equal to the next one
            uniqueIndex = i + 1;
            break;
        }
    }

    return uniqueIndex + 1;  // Adding 1 to convert from 0-based index to 1-based index
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = findUniqueIndex(arr);
        cout << result << endl;
    }

    return 0;
}
