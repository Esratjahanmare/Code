#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char, int>m;
        for(int i=0; i<n; i++)
        {
            m[s[i]]++;
        }
        int cnt=0;
        for(auto it : m)
        {
            if(it.second>=(it.first-'A'+1))
                cnt++;
        }
        cout<<cnt<<endl;
    }
}
