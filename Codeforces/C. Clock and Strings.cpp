#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

int main(){
 int t; cin >> t;
 while(t--){
 	int a, b, c, d; cin >> a >> b >> c >> d;
 	int f = max(a, b);
 	int e = min(a,b);
 	int p = max(c, d);
 	int q = min(c, d);
 	if(q > e && q < f && p > f)
 		cout << "YES" << endl;
 	 else if(p > e && p < f && q < e)
 	 	cout << "YES" << endl;
 	else
 		cout << "NO" << endl;

 }
 return 0;
}
