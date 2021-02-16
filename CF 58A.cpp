#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,h = "hello";
    int r=0;

    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==h[r])
        {
            r++;
        }
    }

    if(r==5)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
