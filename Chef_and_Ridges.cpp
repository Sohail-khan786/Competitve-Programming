#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t,n,px,py,x,y,div,i;

   cin>>t;

   while(t--)
   {
     cin>>n;

     px=0;
     py=0;

     for(i=1;i<=n;i++)
     {
        x=1;
        y = pow(2,i);

       if(i%2==1)
       {
        px = px*2 + x;
       }
       else
       {
         px = px*2 - x;
       }

       div = __gcd(px,y);

       px = px/div;
       y = y/div;

     }

     cout<<px<<" "<<y<<" ";


   }
 return 0;
}
