#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int ss = s.length();
        if (ss <= 10)
            cout << s << endl;
        else
            cout << s[0] << ss-2 << s[ss-1] << endl;
    }
    return 0;
}
