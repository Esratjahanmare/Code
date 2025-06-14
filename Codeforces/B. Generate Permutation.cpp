#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1) cout<<1<<endl;
        else if(n%2==0) cout<<-1<<endl;
        else{
            int m=(n/2)+1;
            for(int i=m; i>=1; i--) cout<<i<<" ";
            for(int i=m+1; i<=n; i++) cout<<i<<" ";
            cout<<endl;
        }
    }
}
