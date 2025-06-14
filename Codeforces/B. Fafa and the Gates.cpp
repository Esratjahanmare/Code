#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;

    int l = 0, r = 0, ch = 0;
    if (s[0] == 'U') {
        l++;
        ch = 1;
    } else {
        r++;
        ch = 2;
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == 'U')
            l++;
        else
            r++;
        if (l > r && l - r == 1 && ch == 2){
            ans++;
            ch = 1;
        }
        if(r > l && r - l == 1 && ch == 1){
            ans++;
            ch = 2;
        }

    }
    cout << ans;
    return 0;
}
