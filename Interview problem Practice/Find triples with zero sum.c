#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool found = false;
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        int l=i+1;
        int r=n-1;
        int x=arr[i];
        while(l<r){
            if(x+l+r==0){
                cout<<x<<" "<<l<<" "<<r<<endl;
                l++;
                r--;
                found=true;
            }
            else if(x+l+r<0){
                l++;
            }
            else{
                r--;
            }
        }
        if(found==false)
            cout<<"NO TRIPLES FOUND"<<endl;
    }
}
