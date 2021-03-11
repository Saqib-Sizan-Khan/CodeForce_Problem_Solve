#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,N;
    int sum = 0;

    cin>>n;
    N = n;

    while(n--)
    {
        cin>>k;
        sum+=k;
    }

    double avg = (double)sum/N;

    cout<<avg<<endl;
}
