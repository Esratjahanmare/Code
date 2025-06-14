#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int findGCD(ll arr[], ll n)
{
  ll result = arr[0];
  for (ll i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);

    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n], ans;
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll resul =findGCD(arr, n);
        ans=arr[n-1]/resul;
    cout<<ans<<endl;
    }
}
