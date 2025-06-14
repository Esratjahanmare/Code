#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, even=0, odd=0;
        cin>>n;
        for(int i=0; i<2*n; i++)
        {
            cin>>x;
            if(x%2==0)
                even++;
            else
                odd++;
        }
        if(even==odd)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
