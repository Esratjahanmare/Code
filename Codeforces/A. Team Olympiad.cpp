#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    int n; cin>>n;
    int a1[n],a2[n], a3[n];
    int aa=0, ab=0, ac=0,num;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        if(num==1)
        {
            a1[aa]=i;
            aa++;
        }
      else  if(num==2)
        {
            a2[ab]=i;
            ab++;
        }
       else if(num==3)
        {
            a3[ac]=i;
            ac++;
        }
    }
    int s=min(aa, min(ab,ac));
    cout<<s<<endl;
    for(int i=0; i<s; i++)
    {
        cout<<a1[i]+1<<" "<<a2[i]+1<<" "<<a3[i]+1<<endl;
    }
}
