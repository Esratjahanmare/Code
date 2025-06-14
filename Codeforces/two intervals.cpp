#include<iostream>
using namespace std;

int main()
{
    int n1,n2, r2, r1;

    cin>>n1>>r1>>n2>>r2;

    if(max(n1,n2)>min(r1,r2))
        cout<<"-1"<<endl;
    else
    cout<<max(n1,n2)<<" "<<min(r1,r2)<<endl;

    return 0;

}
