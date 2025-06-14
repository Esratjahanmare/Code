#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long k=sqrt(2*(long long)n);
     long long sum=k*(k+1)/2;
    if(sum>n) cout<<k-1<<endl;
    else cout<<k<<endl;
}
