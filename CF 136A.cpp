#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,p[110];

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>x;
        p[x]=i;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<p[i]<<" ";
    }

    return 0;
}
