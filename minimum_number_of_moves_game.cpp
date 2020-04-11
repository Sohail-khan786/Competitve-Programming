#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,n,a,sum,mn,steps;
    cin>>t;
    while(t--)
    {
        sum=0;
        mn = 1e9;
        steps=0;

        cin>>n;

        for(i=1;i<=n;i++)
        {
            cin>>a;
            sum += a;
            if(a<mn)
                mn=a;
        }
        steps = sum - n*mn;

        cout<<steps<<endl;
    }
    return 0;
}
