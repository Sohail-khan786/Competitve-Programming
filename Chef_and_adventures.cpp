#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m,x,y,fg=0;

    cin>>t;

    while(t--)
    {
        fg=0;

        cin>>n>>m>>x>>y;

        n--;
        m--;

        if(n%x==0 && m%y==0 && n>=0 && m>=0)
            fg=1;

        n--;
        m--;

        if(n%x==0 && m%y==0 && n>=0 && m>=0)
            fg=1;


        if(fg==1)
            cout<<"Chefirnemo"<<endl;
        else
            cout<<"Pofik"<<endl;
    }
    return 0;
}
