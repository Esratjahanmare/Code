#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, cnt=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        int b=5-a[i];
        if(b>=k)
            cnt++;
    }
    int c=cnt/3;
        cout<<c<<endl;
}
