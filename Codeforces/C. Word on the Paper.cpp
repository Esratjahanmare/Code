#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j,t;
    cin>>t;
    while(t--)
    {
        char c;
        string s;
       for(j=0; j<8; j++)
        {
            for(i=0; i<8; i++)
            {
                cin>>c;
                if(c!='.')
                    s+=c;
            }
        }
            cout<<s<<endl;
        }

}
