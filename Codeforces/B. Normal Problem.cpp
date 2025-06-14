#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--){
        string a;  cin >> a;
        string b = "";

        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] == 'p') {
                b += 'q';
            }
            else if (a[i] == 'q') {
                b += 'p';
            }
            else if (a[i] == 'w') {
                b += 'w';
            }
        }


        cout << b << endl;
    }
}

