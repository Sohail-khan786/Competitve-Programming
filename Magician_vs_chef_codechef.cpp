#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,s,a,b,pos;

    cin>>t;

    while(t--)
    {

        cin>>n>>x>>s;

        pos=x;


        while(s--)
        {
            cin>>a>>b;

            if(a==pos)
            {
                pos=b;
            }
            else if(b==pos)
            {
                pos=a;
            }


        }

        cout<<pos<<endl;
    }
    return 0;
}
