#include<bits/stDc++.h>
using namespace std;
int main()
{
    string s, ss, res;
    cin>>s>>ss;
    int i=s.size()-1;
    int j=ss.size()-1;
    int carry=0;
    int sum=0;
    while(i>=0 || j>=0 || carry){
        int x=(i>=0)? s[i]-'0' : 0;
        int y=(j>=0)?ss[j]-'0' : 0;
        sum=x+y+carry;
        carry=sum/10;
        res.push_back((sum%10)+'0');
        i--, j--;
    }
    reverse(res.begin(), res.end());
    cout<<res<<endl;
}
