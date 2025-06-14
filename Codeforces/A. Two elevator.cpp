#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, a, b, c, ans1=0, ans2=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ans1=abs(a-1);
        ans2=abs(b-c)+(c-1);
        if(ans1<ans2)
            cout<<1<<endl;
        else if(ans1==ans2)
            cout<<3<<endl;
        else
            cout<<2<<endl;
    }
}
