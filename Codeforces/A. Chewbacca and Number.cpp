#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll sz=s.size();
   ll ab=pow(10, sz);
   ll bc=stoi(s)/ab;
    string t="";
    for(int i=1; i<=sz; i++)
    {
        t+=bc;
    }
    cout<<t<<endl;
}
