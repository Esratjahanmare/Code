#include<iostream>
using namespace std;

int main()
{
    char s[101];

    cin>>s;

    int i=0, cnt=0;
    while(s[i]!='\0')
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' )
            {cnt=1;
        break;}
        i++;
    }
    if(cnt==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
