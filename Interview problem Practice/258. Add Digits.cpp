#include<bits/stdc++.h>
using namespace std;
 int solution(int num) {
        while(num>=10){
            int sum=0;
            while(num>0){
             sum+=num%10;
             num/=10;
            }
            num=sum;
        }
    return num;
}

int main()
{
    int n;
    cin>>n;
    cout<<solution(n)<<endl;
}

