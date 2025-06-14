#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s= "abcdefgh";
    while(t--)
    {
        string ss;
        cin>>ss;
        char ch = ss[0];
        int n= ss[1]-'0';

        for(int i=0; i<8; i++)
        {
            if(s[i]!=ch)
                cout<<s[i]<<n<<endl;
        }
        for(int i=1; i<=8; i++)
        {
            if(n!=i)
                cout<<ch<<i<<endl;
        }
    }
}
