#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    int n,cnt=0; cin>>n;
   int v[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]==v[i+1])
        {
            cnt++;
            break;
        }
    }
    if(cnt!=0)
        cout<<n<<endl;
    else
        cout<<0<<endl;
}
