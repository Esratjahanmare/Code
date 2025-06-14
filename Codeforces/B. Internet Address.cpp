#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  string s;
  cin >> s;
  int n = s.size();
  char r, u;
  if (s[0] == 'h' && s[1] == 't' && s[2] == 't' && s[3] == 'p') {
    cout << "http://";
    for (int i = 4; i < n; i++) {
      if (s[i] == 'r' && s[i + 1] == 'u' && i + 1 != n) {
        r = i;
        u = i + 1;
      }
    }
    for (int i = 4; i < r; i++) {
      cout << s[i];
    }
    cout << ".ru";
    if (r + 2 < n) {
      cout << "/";
    }
    else {
      cout << "";
    }
    for (int i = u + 1; i < n; i++) {
      cout << s[i];
    }
    cout << endl;
  }
  else {
    cout << "ftp://";
    for (int i = 3; i < n; i++) {
      if (s[i] == 'r' && s[i + 1] == 'u' && i + 1 != n) {
        r = i;
        u = i + 1;
      }
    }
    for (int i = 3; i < r; i++) {
      cout << s[i];
    }
    cout << ".ru";
    if (r + 2 < n) {
      cout << "/";
    }
    else {
      cout << "";
    }
    for (int i = u + 1; i < n; i++) {
      cout << s[i];
    }
    cout << endl;
  }
}
