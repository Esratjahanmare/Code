#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, sum=0;

   cin>>n;
   int a[n];

   for(i=1;  i<=n; i++)
   {
       cin>>a[i];
   }
    for(i=1;  i<=n; i++)
   {
       sum+=a[i];
   }
   double avg=0;
   avg=(double)sum/n;

   cout<<avg<<endl;
}
