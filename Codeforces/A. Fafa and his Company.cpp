#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int cnt=0, k;
    if(n<=3)
        cout<<1<<endl;
    else
    {
        for(int i=1; i<n; i++)
        {
            k=n-i;
            if(k%i==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
