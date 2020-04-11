#include<iostream>

using namespace std;

int main()
{
  int t,n,k,a[1000],i,maxx,sum1,sum2;
  cin>>t;
  while(t--)
  {
      maxx=0;
      sum1=0;
      sum2=0;
      cin>>n>>k;

      for(i=1;i<=n;i++)
        cin>>a[i];

      for(i=1;i<=n;i++)
      {
         if(i<=k)
            {
                sum1 = sum1 + a[i];
                sum2 = sum2 + a[i];
                maxx=sum1;
            }
         else
         {
            sum2 = sum2 + a[i] - a[i-k];
             maxx = max(sum1,sum2);
             if(sum1<=sum2)
                sum1 = sum2;
         }
      }
      cout<<maxx<<endl;
  }
  return 0;
}
