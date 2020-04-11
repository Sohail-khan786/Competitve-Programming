#include<bits/stdc++.h>

using namespace std ;

int main()
{
    long long int t,a,b,c,sum1=0,sum2=0,diff,status=0;

    cin>>t;

    while(t--)
    {
      a=0;
      b=0;
      c=0;
      sum1=0;
      sum2=0;
      diff =0;

      cin>>a>>b>>c;

      sum1 = (c*3)/6;
      sum2 = (b*2)/6;

      if(sum1<sum2)
      {
        c = c*3 - sum1 * 6;
        b = b*2 - sum1 * 6;

        c = c/3;
        b = b/2;


      }
      else
      {

        c = c*3 - sum2 * 6;
        b = b*2 - sum2 * 6;

        c = c/3;
        b = b/2;

      }


      if(c%2==0)
        sum1 = 0;
      else
        sum1 = 3 ;

      if(b%2==0)
        sum2 = 0;
      else
        sum2 = 2;

      if(sum1>sum2)
        diff = sum1 - sum2;
      else if(sum2>sum1)
        diff = sum2 - sum1;
      else
        diff=0;

      a = a -diff;

      if(a%2==0  && a>=0)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;




    }
  return 0;

}
