#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;

    int a=min(n,m);
    int c=max(n,m);
    int b=(c-a)/2;

    cout<<a<<" "<<b<<endl;
}
