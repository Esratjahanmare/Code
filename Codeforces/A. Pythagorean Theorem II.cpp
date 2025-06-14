#include<bits/stdc++.h>
using namespace std;
const int mx=1e8+123;
bool perfect[mx];
int main()
{
    int n, cnt=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        perfect[i*i]=1;
    }
    for(int a=1; a<=n; a++)
    {
        for(int b=a; b<=n; b++)
        {
            int v=(a*a)+(b*b);
            if(v>=mx) break;
            if(perfect[v]){
            cnt++;}
        }
    }
    cout<<cnt<<endl;
}
