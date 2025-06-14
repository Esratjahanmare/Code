#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    vector<int>v(n);
    vector<int>vmx;
    for(int i=0; i<n; i++) {
            int x;
    cin>>x;
    v.push_back(x);
    vmx.push_back(x);
    }
   sort(vmx.begin(), vmx.end(), greater<int>());
    int sum=0;
    for(int i=0; i<k; i++){
        sum+=vmx[i];
    }
    cout<<sum<<endl;
    int y=0;
    vector<int>res;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            if(v[i]==vmx[j])
            {
                res.push_back(i+1);
                vmx[j]=-1;
                y++;

                if(y==k) break;
            }
        }
        if(y==k) break;
    }
    int last;
    for(int i=0; i<res.size()-1; i++)
    {
        if(i==0)
            cout<<res[i]<<" ";
        else
            cout<<res[i]-res[i-1]<<" ";
       if(i==res.size()-2)
        last=res[i];
    }
    cout<<n-last;
}
