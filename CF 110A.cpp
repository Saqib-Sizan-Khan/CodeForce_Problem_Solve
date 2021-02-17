#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,r,c=0;

    cin>>n;

    while(n!=0)
    {
        r=n%10;
        if(r==7 || r==4)
        {
            c++;
        }
        n/=10;
    }

    if(c==4 || c==7)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
