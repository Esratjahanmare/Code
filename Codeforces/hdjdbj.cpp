#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n,leng;
    cin>>n;
    char s[100];
    for(i=1;i<=n;i++)
    {
        cin>>s;

    leng= strlen(s);
        if(leng>10)
        {
            cout<<s[0]<<leng-2<<s[leng-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
}
