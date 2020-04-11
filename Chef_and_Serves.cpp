#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,k,p1,p2,score;

    cin>>t;

    while(t--)
    {
        score = 0;
        p1=0;
        p2=0;
        k=0;

       cin>>p1;
       cin>>p2;
       cin>>k;

       score = p1 + p2;

       if( (score/k)%2 == 0 )
       {
         cout<<"CHEF"<<endl;
       }
       else
       {
         cout<<"COOK"<<endl;
       }


    }
  return 0;
}
