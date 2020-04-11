#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,x,y;

    cin>>t;

    while(t--)
    {
       cin>>x>>y>>a>>b;

       if(y*log10(x*1.0) > b*log10(a*1.0))
        cout<<"x^y"<<endl;
       else
        cout<<"a^b"<<endl;

    }
 return 0;
}
