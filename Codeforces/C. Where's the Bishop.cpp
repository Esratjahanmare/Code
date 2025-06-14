#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[9];
        for(int i=0; i<8; i++)
        {
            cin>>s[i];
        }
        int row, col;
         for (int i = 1; i < 8; ++i) {
            for (int j = 1; j < 8; ++j) {
                if (s[i-1][j+1] == '#' && s[i-1][j-1]=='#' && s[i+1][j+1]=='#' && s[i+1][j-1]=='#') {
                    row = i + 1;
                    col = j + 1;
                }
            }
        }

        cout<<row<<" "<<col<<endl;
    }
}
