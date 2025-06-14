#include<iostream>
using namespace std;

int main()
{
    int n, i;

    cin>>n;

        int fd[n];
        int gift[n];

        for(i=1; i<=n; i++)
        {
            cin>>fd[i];
            gift[fd[i]]=i;
        }

        for(i=1; i<=n; i++)
        {
        cout<<gift[i]<<" ";
        }
        return 0;
}
