#include<bits/stdc++.h>
using namespace std;

string solution(string s) {
    int n = s.length();
    vector<int>f(26);

    for (auto &i : s) {
        f[i-'a']++;
    }

    char mx = s[0], mn=s[0];

    for (int i=0; i<26; i++) {
        if (f[i]>=f[mx-'a'])
            mx='a' + i;
        if(f[25-i] <= f[mn-'a' ]&& f[25-i])
            mn='a' + (25-i);
    }

    for (int i = 0; i < n; i++) {
        if (s[i] ==mn) {
            s[i] = mx;
            break;
        }
    }

    return s;
}

int main() {
    int t;  cin >> t;
    while (t--) {
        int n;  cin >> n;
        string s;  cin >> s;

        string result = solution(s);
        cout << result << endl;
    }
    return 0;
}

