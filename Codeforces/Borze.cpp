#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i, sum=0;

    cin>>s;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
            cout<<"0";
        else if(s[i]=='-')
            sum++;
        cout<<sum;
        else if(s[i]=='.')
            continue;
        else
            break;
    }
    return 0;
}
