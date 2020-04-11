#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,i,x;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        for(i=1;i<=n;i++)
        {
            cin>>x;

            if(k-x>=0)
            {
                cout<<"1";
                k = k - x;
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;

    }

    return 0;
}
