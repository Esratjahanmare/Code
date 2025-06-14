#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, sum=0, i;
    cin>>k>>r;
    for(i=1;;i++)
    {
        sum+=k;
        if(sum%10==0 || sum%10==r)
        {
            cout<<i<<endl;
            break;
        }
        else
            continue;
    }
}
