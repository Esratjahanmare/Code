#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char mx = s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (mx < s[i])
            {
                mx = s[i];
            }
        }
        int mm = mx - 'a' + 1;
        cout << mm << endl;
    }
    return 0;
}
