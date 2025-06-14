#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, a, i;
   cin>>n>>a;

   for(i=0; i<a; i++)
   {
       if(n%10==0)
        n/=10;
       else
        n=n-1;
   }
   cout<<n<<endl;
}
