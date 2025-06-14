#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    string s1= "I hate it ";
    string s2= "I hate that ";
    string s3="I love that ";
    string s4= "I love it ";

    cin>>n;

        for(int i=1; i<n; i++)
        {
            if(i%2==1)
                cout<<s2;
            if(i%2==0)
                cout<<s3;
        }
    if(n%2==1)
        cout<<s1;
    else
        cout<<s4;
}
