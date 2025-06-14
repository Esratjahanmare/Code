#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n; int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
       vector<int>v;
       int x=0;
       int y=n-1;
       while(x<y)
       {
           v.push_back(a[x]);
           v.push_back(a[y]);
           x++;
           y--;
       }
       if(n%2==1)
        v.push_back(a[x]);
       for(int i=0; i<n; i++)
       {
           cout<<v[i]<<" ";
       }
       cout<<endl;
    }
}
