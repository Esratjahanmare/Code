#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, k, d;
    cin>>n>>t>>k>>d;
    int res=(t+d)/t;
    if(res*k<n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
