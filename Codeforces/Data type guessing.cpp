#include<iostream>
using namespace std;

int main()
{
    double a, b, c;

    cin>>a>>b>>c;

    double x= (a*b)/c;

   long long y= (long long)x;

    if(x==y)
    {
        if(x>=(-2147483648) && x<=(2147483648) )
            cout<<"int"<<endl;
        else
            cout<<"long long"<<endl;
    }
    else
        cout<<"double"<<endl;

    return 0;
}
