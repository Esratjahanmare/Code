#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n, k, w, sum=0,cnt=0,i;

   cin>>k>>n>>w;

    for(i=1;i<=w;i++)
    {
        sum=sum+i*k;
    }
    if(sum<=n)
        cout<<"0"<<endl;
     else
         cout<< sum-n<<endl;

    return 0;
}
