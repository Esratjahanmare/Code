#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, fact=1;
    cin>>n>>m;

    int f=min(n,m);

    for(int i=1; i<=f; i++)
    {
        fact*=i;
    }
    cout<<fact<<endl;
}
