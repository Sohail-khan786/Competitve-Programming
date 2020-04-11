#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,x,y,z,flag=0;

    cin>>t;

    while(t--)
    {
        flag=0;

       cin>>x>>y>>z;

       //checking all eight possiblities
       if(x + y + z == 0)flag=1;
       if(x + y - z == 0)flag=1;
       if(x - y + z == 0)flag=1;
       if(x - y - z == 0)flag=1;
       if(-x + y + z == 0)flag=1;
       if(-x + y - z == 0)flag=1;
       if(-x - y + z == 0)flag=1;
       if(-x - y - z == 0)flag=1;

       if(flag)
        cout<<"yes"<<endl;
       else
        cout<<"no"<<endl;


    }
    return 0;
}
