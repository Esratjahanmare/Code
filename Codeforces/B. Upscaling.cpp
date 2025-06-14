#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
         for(int i=0; i<n; i++)
         {
             int x=2;
             char a='#';
             char b='.';
             if(i%2==1)
             {
                 a='.';
                 b='#';
             }
             while(x--)
             {
                 for(int j=0; j<n; j++)
                 {
                     int p=2;
                     while(p--)
                     {
                         if(j%2==0)
                            cout<<a;
                         else
                            cout<<b;
                     }
                 }
                 cout<<endl;
             }
         }
    }
    return 0;
}
