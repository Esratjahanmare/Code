#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

vector<int>v(200000);
int sum_of_digit(int n)
{
    ll r,sum=0;
    while(n!=0)
    {
        r = n % 10;
        sum += r;
        n = n / 10;
    }
    return sum;
}

int main()
{
    v[0] = 0;
    for(int i = 1; i < v.size(); i++)
    {
        v[i] = v[i-1] + sum_of_digit(i);
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << v[n] << endl;
    }
    return 0;
}
