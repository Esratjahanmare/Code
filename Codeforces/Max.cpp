#include<iostream>
using namespace std;

int main()
{
    int n, i,j,m;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
       m=a[0];
    for(i=1; i<n; i++)
    {
        if(m<a[i])
            m=a[i];
    }

    cout<<m<<endl;
    return 0;
}
