#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

 int t; cin >> t;
 while(t--){
 	int n, m; cin >> n >> m;
 	ll a[n];
 	for(int i = 0; i < n; i++){
 		cin >> a[i];
 	}
 	ll mx = 0;
 	for(int i = 1; i <= m; i++){
 		char ch;
 		int l, r; cin >> ch >> l >> r;
 		if(i == 1){

 			for(int j = 0; j < n; j++){
 				if(a[j] >= l && a[j] <= r){
 					if(ch == '+')a[j]++;
 					else a[j]--;
 				}
 				mx = max(mx,a[j]);
 			}
             cout << mx << " ";

 		}
 		else{
 			if(mx >= l && mx <= r ){
 				if(ch == '+')
 					mx++;
 				else
 					mx--;
 			}
 			cout << mx << " ";
 		}
 	}
 	cout << endl;
 }
 return 0;
}
