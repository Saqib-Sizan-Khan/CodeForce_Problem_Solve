#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,c=1,k=0;

    cin>>n;

    long long a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            c++;
        }

        else
        {
            k = max(k,c);
            c=1;
        }
    }

    cout<<max(k,c)<<endl;

    return 0;
}
