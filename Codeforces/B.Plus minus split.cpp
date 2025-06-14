#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, ans=0;
    char c;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        string s;
        cin>>n;+
        cin>>s;

         for(i=0;i<n; i++)
        {
            if(s[i]=='+')
                cnt++;
            else
                cnt--;
        }
        cout<< abs(cnt) <<endl;
    }
}
