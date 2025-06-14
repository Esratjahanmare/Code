#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, cnt=0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
          cout<<s[0];
        for(i=1; i<s.size(); i+=2)
        {
              cout<<s[i];
        }
        cout<<endl;
    }
}
