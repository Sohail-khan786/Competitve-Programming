#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long p = n/26;
        long long ans= pow(2ll,p);
        p= n%26;

       // if(p==0) p=26;
        if(p<=2)
            cout<<ans<<" 0 0\n";
        else if(p<=10)
            cout<<"0 "<<ans<<" 0\n";
        else
            cout<<"0 0 "<<ans<<'\n';
    }
    return 0;
}
