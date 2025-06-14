#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                count++;
        }

        bool ans = true;
        if (count % 2 != 0) {
            cout << "NO" << endl;
        } else {
            for (int i = 0; i < n - 1; i++) {
                if (count == 2 && s[i] =='1' && s[i + 1]=='1') {
                    ans = false;
                    break;
                }
            }

            if (ans)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        //else cout<<"YES"<<endl;
    }

    return 0;
}
