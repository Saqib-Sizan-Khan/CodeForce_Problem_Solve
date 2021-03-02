#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c[105],r[105];

    cin>>c;

    strcpy(r,c);

    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]>='A' && c[i]<='Z')
        {
            c[i] += 32;
        }
        else
        {
            break;
        }

        if(i==(strlen(c)-1))
        {
            cout<<c<<endl;
            return 0;
        }
    }

    for(int i=1;i<strlen(r);i++)
    {
        if(r[i]>='a' && r[i]<='z')
        {
            cout<<r<<endl;
            return 0;
        }
    }

    strlwr(r);

    r[0] = r[0]-32;

    cout<<r<<endl;

    return 0;
}
