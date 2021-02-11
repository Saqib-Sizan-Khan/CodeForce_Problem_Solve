#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,a,r;

    cin>>n>>m>>a;

    r = ((m+a-1)/a)*((n+a-1)/a);

    cout<<r<<endl;

    return 0;
}
