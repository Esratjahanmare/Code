#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    bool ans=true;

   if(n==2 && m==3)
   {
       ans=true;
   }
  else if(n==3 && m==5)
   {
       ans=true;
   }
  else if(n==5 && m==7)
   {
       ans=true;
   }
  else if(n==7 && m==11)
   {
       ans=true;
   }
else   if(n==11 && m==13)
   {
       ans=true;
   }
 else  if(n==13 && m==17)
   {
       ans=true;
   }
  else if(n==17 && m==19)
   {
       ans=true;
   }
 else  if(n==19 && m==23)
   {
       ans=true;
   }
 else  if(n==23 && m==29)
   {
       ans=true;
   }
  else if(n==29 && m==31)
   {
       ans=true;
   }
  else if(n==31 && m==37)
   {
       ans=true;
   }
 else  if(n==37 && m==41)
   {
       ans=true;
   }
 else  if(n==41 && m==43)
   {
       ans=true;
   }
  else if(n==43 && m==47)
   {
       ans=true;
   }
   else
   {
       ans=false;
   }
    if(ans)
        cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
