#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d=0, e=0;
    cin >> n;
    string s;
    cin >> s;

   int aa=count(s.begin(), s.end(), '1');
   int bb=n-aa;

    int mn = min(aa, bb);
    cout << n - mn*2<< endl;
    return 0;
}
