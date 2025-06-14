#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        long long n, sum=0;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=(a[i]);
        }
        if(sum>=n)
        cout<<sum-n<<endl;
        else
            cout<<1<<endl;
}

return 0;
}
