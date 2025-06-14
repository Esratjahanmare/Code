#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        for (int num : a) {
            freq[num]++;
        }

        int score = 0;
        for (auto& [key, count] : freq) {
            score += count / 2;
        }

        cout << score << endl;
    }
    return 0;
}
