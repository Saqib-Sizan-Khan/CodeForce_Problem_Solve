#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[105];
    int c1=0,c2=0;

    cin>>s;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            c1++;
        }

        else
        {
            c2++;
        }
    }

    if(c1==c2)
    {
        cout<<strlwr(s)<<endl;
    }

    else if(c1>c2)
    {
        cout<<strupr(s)<<endl;
    }

    else
    {
        cout<<strlwr(s)<<endl;
    }
    return 0;
}
