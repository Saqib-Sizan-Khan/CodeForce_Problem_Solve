#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,v[105];
    int sum=0,result=0,c=0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum += v[i];
    }

    sort(v,v+n);

    for(int i=n-1; i>=0; i--)
    {
        result += v[i];
        c++;

        if(result > sum/2)
            break;
    }

    cout<<c<<endl;

    return 0;
}
