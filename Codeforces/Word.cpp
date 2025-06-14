#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    int cnt=0, c=0;

    cin>>s1;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
            cnt++;
        else if(s1[i]>='A' && s1[i]<='Z')
            c++;
    }
    if(cnt>=c)
       {transform(s1.begin(), s1.end(), s1.begin(), ::tolower);}

    else
        {transform(s1.begin(), s1.end(), s1.begin(), ::toupper);}
    cout<<s1<<endl;

    return 0;

}
