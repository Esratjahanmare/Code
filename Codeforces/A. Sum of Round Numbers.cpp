#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        vector<int>ans;
        int n, p, x=1;
        cin>>n;
        while(n!=0)
        {
            x=x*10;
            p=n%x;
            if(p!=0)
                ans.push_back(p);
            n=n-p;
        }
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}
