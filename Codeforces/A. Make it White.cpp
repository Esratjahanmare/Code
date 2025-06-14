#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        string s;
        cin >> s;
        int d,e;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B')
            {
                d = i;
                break;
            }
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B')
            {
                e = i;
            }
        }
        cout << e-d+1 << endl;
    }
    return 0;
}
