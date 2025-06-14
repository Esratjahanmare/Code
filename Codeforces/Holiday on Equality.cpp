#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t, i,m=0,sum=0;
  cin>>t;
  int a[t];
  for(i=0; i<t; i++)
  {
  cin>>a[i];
  if(a[i]>m)
  {
  m=a[i];
  }
  }
  for(i=0; i<t; i++)
  {
  sum=sum+(m-a[i]);
  }
  cout<<sum;

    return 0;
}
