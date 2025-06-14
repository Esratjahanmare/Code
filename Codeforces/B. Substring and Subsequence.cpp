#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        int cnt1 = s1.size();
        int cnt2 = s2.size();
        int ans = cnt1 + cnt2;
        int extra = 0;

        for (int i = 0; i < cnt2; i++) {
            int tmp = 0;
            int ind = i;

            for (int j = 0; j < cnt1 && ind < cnt2; j++) {
                if (s1[j] == s2[ind]) {
                    ind++;
                    tmp++;
                }
            }
            extra = max(extra, tmp);
        }
        cout << ans - extra << endl;
    }
    return 0;
}
