#include <bits/stdc++.h>
using namespace std;
int main() {

  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> k >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
      ans += 2 * a[i] - 1;
    }
    cout << ans << endl;
  }
  return 0;
}
