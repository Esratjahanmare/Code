#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int A=(k*l)/nl;
    int B=c*d;
    int C=p/np;

    int D=min(A, min(B,C));
    int E=D/n;

    cout<<E<<endl;

    return 0;
}
