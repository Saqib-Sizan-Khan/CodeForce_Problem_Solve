#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,r=0;
    priority_queue<int>q;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        r= (r-a)+b;

        q.push(r);
    }

    cout<<q.top()<<endl;

    return 0;
}
