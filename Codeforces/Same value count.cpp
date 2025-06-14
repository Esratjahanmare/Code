#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        b[a[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<"Value : "<<a[i]<<" Count : "<<b[i]<<endl;
    }
}
