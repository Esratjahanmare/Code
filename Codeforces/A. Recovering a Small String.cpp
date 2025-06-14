#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int t;
    cin>>t;
    while(t--){
    int a;
	cin >> a;
	string s,mn="zzz";
	for (int i = 1; i <= 26; i++)
	{
		for (int j = 1; j <=26; j++)
		{
			for (int k = 1; k <= 26; k++)
			{
				if (i + j + k == a)
				{
					s=s+(char)('a' + i-1 );
					s=s+(char)('a' + j-1 );
					s=s+(char)('a' + k-1 );
					mn=min(s,mn);
				}
			}
		}
	}

    cout<<mn<<endl;

    }
    return 0;
    }

