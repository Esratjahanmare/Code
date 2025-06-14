#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j,n,m;
    cin>>n>>m;
    string s;
    cin>>s;

    for(i=0; i<m; i++)
    {
        for(j=0; j<s.size()-1; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }
    cout<<s<<endl;
}
