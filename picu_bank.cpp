
#include<bits/stdc++.h>

using namespace std;

int main()
{
  long long int t,d,a,m,b,x,days,q,i;
  cin>>t;
  while(t--)
  {
      i=1;
      days=0;
      cin>>d>>a>>m>>b>>x;

      if(x <= d || x==0){
        cout<<days<<endl;
        return 0;
      }


      x = x-d;
      q = x/(a*m + b);
      x = x%(a*m + b) ;
      days = q * (m+1);

      //optimize this loop
      if(x>0)
      {
          if(x <= a*m)
          {
              q = x/a;
              x = x%a;
              if(x==0)
              days = days + q;
              else
                days = days + q +1;
          }
          else
          {
              days = days + m + 1;
          }
      }
      cout<<days<<endl;
  }
  return 0;
}

