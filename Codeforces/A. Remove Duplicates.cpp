#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> lastIndex;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        lastIndex[a[i]] = i; // Store the last index of each element
    }

    vector<int> result;
    for (int i = 0; i < n; ++i) {
        if (lastIndex[a[i]] == i) { // If the current index is the last index of the element
            result.push_back(a[i]); // Add it to the result
        }
    }

    cout << result.size() << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
