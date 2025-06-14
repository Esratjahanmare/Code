#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define pb push_back

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];

        if(is_sorted(all(a))) cout<<"YES"<<endl;

        else
        {
            int last=0;
            vector<int>ans;
            for(int i=0; i<n; i++)
            {
                int r=a[i]%10;
                int v=a[i]/10;
                if(v>=last && r>=v)
                {
                    last =r;
                    ans.pb(v);
                    ans.pb(r);
                }
                else
                {
                    ans.pb(a[i]);
                    last=a[i];
                }
            }
            if(is_sorted(all(ans)) )cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
