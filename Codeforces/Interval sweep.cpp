
#include<iostream>
using namespace std;

int main()
{
    int s1, s2;

    cin>>s1>>s2;

    if(s1-s2==1 || s2-s1==1 ||(s1==s2 && s1!=0 && s2!=0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

