#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,div,ans,bit,byte,nibble;

    cin>>t;

    while(t--)
    {
        div=0;
        ans=1;
        n=0;
        bit=0;
        byte=0;
        nibble=0;

     cin>>n;

     /*div = n/29;

     bit = pow(2,div);

     n = n % 29;

     if(n>=12)
     {
       //div = n / 12;
       byte = bit ;
       bit = 0 ;
     }
     else if(n>=3)
     {
        nibble = bit ;
        bit = 0;
     }*/

     div = n/26;

     bit = pow(2,div);

     n = n % 26;

     if(n>=10)
     {
       //div = n / 12;
       byte = bit ;
       bit = 0 ;
     }
     else if(n>=2)
     {
        nibble = bit ;
        bit = 0;
     }



     cout<<bit<<" "<<nibble<<" "<<byte<<endl;
    }
 return 0;
}
