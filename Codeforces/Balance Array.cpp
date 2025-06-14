#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    int a[t];
    while(t--)
    {
        cin>>n;
        vector<int>v;
        vector<int>v2;
        int sum=0,sum2=0,cnt=0,cnt2=0;
        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                v.push_back(i);
                sum+=i;
                cnt++;
            }
            else
            {
                v2.push_back(i);
                sum2+=i;
                cnt2++;
            }
        }
        int s=0;
        s=sum-sum2;
        if(s%2==0)
        {
            cout<<"YES"<<endl;
            for(i=0; i<cnt; i++)
            {
                cout<<v[i]<<" ";
            }
            for(i=0; i<cnt2-1; i++)
            {
                cout<<v2[i]<<" ";
            }
            cout<<v2[cnt2-1]+s<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
