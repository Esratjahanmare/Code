#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
       sort(v.begin(), v.end());
       int l=0, r=n-1;
      while(l<r)
       {
           sum+=v[r]-v[l];
           l++;
           r--;
       }
            cout<<sum<<endl;
        }
}
