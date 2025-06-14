#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
       int n, m;
    cin >> n >> m;

    int x = 0, y = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j] == '#') {
                x += i;
                y += j;
                c++;
            }
        }
    }

    x /= c;
    y /= c;
    cout << x + 1 << " " << y + 1 << "\n";
    }
    return 0;
}
