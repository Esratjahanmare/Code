#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,cnt=0;
        cin >> n;
        int a[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int ns=sum/n;
        int extra=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]+extra<ns)
            {
                cnt++;
                break;
            }
            else
            {
                a[i]+=extra;
                extra=a[i]-ns;
            }
        }
        if(cnt==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
