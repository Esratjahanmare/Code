#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    if(n%2!=0)
        cout<<-1<<endl;
    else
    { long long a[n];
        for(int i=1; i<=n; i++)
        {
            a[i]=i;
        }
        for(int i=1; i<=n; i++)
        {
            swap(a[i], a[i+1]);
            i++;
        }
          for(int i=1; i<=n; i++)
            cout<<a[i]<<" ";
    }
}
