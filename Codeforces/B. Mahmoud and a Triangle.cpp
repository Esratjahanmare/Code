#include <bits/stdc++.h>
using namespace std;

bool Triangle(int n, vector<int>& v) {
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 2; ++i) {
        if (v[i] + v[i + 1] > v[i + 2]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    if (Triangle(n, v)) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
    return 0;
}
