#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll ss = s.length();
        if (s[0] != '1' || s[ss-1] == '9')   {
            cout << "NO" << endl;
        }
        else   {
            bool ans =true;
            for(int  i=1; i< ss-1; i++){
                 if(s[i]=='0')
                    ans=false;
            }
            cout<<(ans? "YES\n" : " NO\n");
        }
    }
    return 0;
}
