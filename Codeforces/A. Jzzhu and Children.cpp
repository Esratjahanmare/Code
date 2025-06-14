#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, cnt=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]!=i)
            cnt++;
    }
    cout<<cnt<<endl;
}
