#include<iostream>
using namespace std;

int main()
{
    int n,m,r;
    cin>>n;

    r=n%10;
    m=n/10;

    if(r%m==0 || m%r==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
