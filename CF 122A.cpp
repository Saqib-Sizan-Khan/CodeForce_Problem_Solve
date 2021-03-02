#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,r=1;
    bool flag=0;

    cin>>n;
    int arr[]={4,7,44,47,77,74,444,447,474,477,777,774,747,744};

    for(int i=0;i<14;i++)
    {
        if(n%arr[i]==0)
        {
            flag=true;
        }
    }

    if(flag)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }
    return 0;
}
