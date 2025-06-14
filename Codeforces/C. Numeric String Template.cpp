#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define pb push_back

int main(){
 int t; cin >> t;
 while(t--){
 	int n; cin >> n;
 	int a[n];
 	map<int,vector<int>>mp1;
 	for(int i = 0; i < n; i++){
 		cin >> a[i];
 		mp1[a[i]].pb(i);
 	}
 	int m; cin >> m;
 	while(m--){
 		string s; cin >> s;
 		if(n != s.size()){
 			cout << "NO" << endl;
 			continue;
 		}
 		map<char, vector<int>>mp2;
 		int f = 0;
 		map<char,int>mp;
 		vector<int>v;
 		for(char i = 'a'; i <= 'z'; i++){
 			mp[i] = 0;
 		}
 		for(int i = 0; i < s.size(); i++){
 			mp2[s[i]].pb(i);
                  if(mp[s[i]] == 0){
                  v.pb(i);
                  mp[s[i]] = 1;
            }
 		}

       for(int i = 0; i<v.size(); i++){
       	   char ch = s[v[i]];
       	   int d = a[v[i]];
       	   if(mp1[d] != mp2[ch]){
       	   	f = 1;
       	   	break;
       	   }
       }
       if(f == 0){
       	cout << "YES" << endl;

       }
       else
       	cout << "NO" << endl;
 	}
 }
 return 0;
}
