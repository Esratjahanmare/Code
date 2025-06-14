#include<bits/stdc++.h>
using namespace std;
class MaxPerimeter{
public:

    bool isTriangle(int a, int b, int c){
         return (a+b>c) && (b+c>a) && (a+c>b);
    }

    int Findmaxperi(vector<int>& a){
        int n=a.size();
        if(n<3) {
            return 0;
        }

        sort(a.begin(), a.end(), greater<int>());

        int Max_peri=-1;
        for(int i=0; i<n-2; i++){
        if(isTriangle(a[i], a[i+1], a[i+2])){
            Max_peri=a[i]+a[i+1]+a[i+2];
            break;
        }
    }
    return Max_peri;
    }
};
int main()
{
    vector<int>a1={6, 1, 6, 5, 8, 4};
     vector<int>a2={2, 20, 7, 55, 1, 33, 12, 4};
     vector<int>a3={33, 6, 20, 1, 8, 12, 5, 55, 4, 9};

      MaxPerimeter triangle;

     cout << triangle.Findmaxperi(a1) << endl;
    cout << triangle.Findmaxperi(a2) << endl;
    cout << triangle.Findmaxperi(a3) << endl;
    }
