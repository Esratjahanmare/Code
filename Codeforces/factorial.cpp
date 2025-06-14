
#include<iostream>
using namespace std;

int main()
{
    int w,n,i;
    long long fact=1;
    cin>>w;
    for(int j =1; j<=w; j++)
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;
        fact=1;
    }
return 0;
}
