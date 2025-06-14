#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
                cout << s[i] << s[i+1];
                if(i + 3 < n and (s[i+3]=='b' or s[i+3]=='c' or s[i+3]=='d'))
                {
                    if (i + 2 < n - 1)
                       cout<<s[i+2]<<".";
                    else if (i + 2 == n - 1)
                       cout << s[i+2];
                    i+=2;
                }
                else
                {
                    if (i + 2 < n and i + 2 != n - 1)
                      cout<<".";
                    else if (i + 2 == n - 1) {
                        cout << s[i+2];
                        i+= 1;
                    }
                    i+=1;
                }
        }
        cout << endl;
    }
    return 0;
}
