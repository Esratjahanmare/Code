#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;

    long long mul=min(a,b);
    if(mul%2==0)
        cout<<"Malvika"<<endl;
    else
         cout<<"Akshat"<<endl;
}
