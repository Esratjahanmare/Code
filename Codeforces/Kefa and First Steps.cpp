#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i,cnt=0,m=1;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i]>=a[i-1])
            {
                cnt++;
                m=max(m,cnt);
            }
        else
        cnt=1;
    }
    cout<<m<<endl;

    return 0;
}
