#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    cin >> s;

  //   bool ans = false;
    for (ll i = 0; i < s.size(); i++) {
        if (i == 0 && s[i] == '9') {
            continue;
        }

        int digit = s[i] - '0';
        if (digit > 4) {
            s[i] = '9' - s[i] + '0';
        }
    }

    cout << s << endl;
    return 0;
}
