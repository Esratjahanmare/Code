#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s, temp;
        cin>>s;
        temp=s;
        reverse(temp.begin(), temp.end());
        if(s<=temp)
        {
            if(n%2==0)
                cout<<s<<endl;
                else
                    cout<<s<<temp<<endl;
        }
        else
        {
            if(n%2==1)
                cout<<temp<<endl;
            else
                cout<<temp<<s<<endl;
        }
    }
}
