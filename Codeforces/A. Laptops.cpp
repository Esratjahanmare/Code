#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;
        v.push_back({p, q});
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++) {
        if (v[i].second <v[i - 1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;

    return 0;
}
