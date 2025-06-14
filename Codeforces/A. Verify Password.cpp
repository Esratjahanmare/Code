#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool ans = true;

        for (int i = 0; i < n; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                if ((s[i] >= 'a' && s[i] <= 'z') && (i+1 < n && s[i+1] >= '0' && s[i+1] <= '9')) {
                    ans = false;
                    break;
                }
                else if (i+1 < n && s[i] > s[i+1]) {
                    ans = false;
                    break;
                }
            }
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
