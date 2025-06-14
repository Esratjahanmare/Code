#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, n, sum=0, sum2=0;

    cin>>n;
    int a[n];
    while(n--)
    {
        cin>>s;
        sum=s[0]+s[1]+s[2];
        sum2=s[3]+s[4]+s[5];
        if(sum==sum2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
