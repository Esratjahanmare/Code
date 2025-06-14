#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        string v = "aeiou";
        string r = "";

        for(int i = 0; i < n; i++) {
            r += v[i % 5];
        }
        sort(r.begin(), r.end());
        cout << r << endl;
    }

    return 0;
}
