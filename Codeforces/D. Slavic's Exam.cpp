#include<bits/stdc++.h>
using namespace std;

void subs()
{
    string s, t;
    cin >> s >> t;
    int l = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (l < t.size() && (s[i] == t[l] || s[i] == '?'))
        {
            s[i] = t[l];
            l++;
        }
        else if (s[i] == '?')
        {
            s[i] = 'a';
        }
    }
    if (l == t.size())
    {
        cout << "YES" << endl << s << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        subs();
    }

    return 0;
}
