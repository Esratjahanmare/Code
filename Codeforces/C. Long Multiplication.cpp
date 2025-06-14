#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a,b;
        cin >> a >> b;

        int n = a.size();
       string x="", y="";
      for(int i=0; i<n; i++)
      {
          char c=a[i];
          char d=b[i];
          char mx=max(c,d);
          char mn=min(c,d);
          if(x>=y)
          {
              y+=mx;
              x+=mn;
          }
          else
          {
              x+=mx;
              y+=mn;
          }
      }

        cout << y<< endl;
        cout << x<< endl;
    }

    return 0;
}
