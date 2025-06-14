#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, ans;
    cin>>n;
    while(n--)
    {
        cin>>x;
        ans=x/10;
         if(x%10==9)
            ans++;

            cout<<ans<<endl;
    }
}
