#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i, sum=0, cnt=0,sum2=0;
    cin>>a;
    int A[a];

    for(i=0; i<a; i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    sum/=2;
    sort(A, A+a);
    for(int j=a-1; j>=0; j--)
    {
        sum2+=A[j];
        cnt++;
        if(sum<sum2)
            break;
    }
    cout<<cnt<<endl;
}
