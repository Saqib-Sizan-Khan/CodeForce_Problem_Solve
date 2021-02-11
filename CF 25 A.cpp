#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0,p,q;
    int arr[103];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]%2 == 0)
        {
            a++;
            p=i;
        }

        else
        {
            b++;
            q=i;
        }
    }

    if(a==1)cout<<p+1<<endl;

    else cout<<q+1<<endl;
}
