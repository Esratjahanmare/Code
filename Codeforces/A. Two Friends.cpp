
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
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        vector<bool> visited(n + 1, false);
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (!visited[i + 1]) {
                int cur = i + 1;
                while (!visited[cur]) {
                    visited[cur] = true;
                    cur = p[cur - 1];
                }
                ++count;
            }
        }

        cout << count << endl;
    }

    return 0;
}
