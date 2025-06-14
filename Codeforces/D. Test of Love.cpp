#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s = "L" + s + "L";
    n += 2;
    bool ok = true;
    int pos = 0;
    while (pos < n - 1) {
      if (s[pos] == 'L') {
        bool found = false;
        for (int i = pos + 1; i < n && i <= pos + m; i++) {
          if (s[i] == 'L') {
            pos = i;
            found = true;
            break;
          }
        }
        if (!found) {
          pos += m;
          if (s[pos] == 'C') {
            ok = false;
            break;
          }
        }
      } else {
        pos += 1;
        if (s[pos] == 'C') {
          ok = false;
          break;
        }
        k -= 1;
      }
    }
    cout << (ok && k >= 0 ? "YES" : "NO") << '\n';
  }
  return 0;
}
