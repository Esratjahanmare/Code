#include<bits/stdc++.h>
using namespace std;
int main(){
int t; cin >> t;
while(t--){
	int a,b,c;
	cin >>a>>b>>c;

	for(int i = a; i > b; i--){
       cout << i << " ";
	}
	for(int i = 1; i <= b; i++){
		cout << i << " ";
	}
	cout << endl;
}

 return 0;
}
