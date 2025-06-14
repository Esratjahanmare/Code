#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int>& arr) {
    vector<vector<int>> result;
    int n = arr.size();

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    result.push_back({i, j, k});
                }
            }
        }
    }

    return result;
}

int main() {
    vector<int> arr1 = {0, -1, 2, -3, 1};
    vector<vector<int>> res1 = findTriplets(arr1);

    // Print results
    for (auto triplet : res1) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }

}
