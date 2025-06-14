#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int d = sqrt(n);
        if((d * d) != n)
        {
            cout << "No" << endl;
            continue;
        }

        int f = (d * 2) + ((d - 2)*2);
        int g = n - f;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
                cnt1++;
            else
                cnt2++;
        }
        if(f == cnt1 && g == cnt2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
