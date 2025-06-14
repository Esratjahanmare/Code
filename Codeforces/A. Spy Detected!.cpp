#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n; int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int visited[n];
    for(int i=0; i<n; i++)
    {
        if(visited[i]!=1)
        {
           int count = 1;
           for(int j=i+1; j<n; j++)
            {
              if(arr[i]==arr[j])
              {
                 count++;
                 visited[j]=1;
              }
            }
            if(count==1)
            {
                cout<<i+1<<endl;
            }
        }
    }
    }
    return 0;
}
