#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[101], s2[102];

  cin>>s1>>s2;
  strlwr(s1);
  strlwr(s2);
  int v=strcmp(s1,s2);

    cout<<v<<endl;

    return 0;
}
