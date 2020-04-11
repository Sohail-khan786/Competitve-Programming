#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t,i,n,k,s,x,sum1,sum2,exp;
  cin>>t;
  while(t--)
  {
    exp=0;
    sum1=0;
    sum2=0;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(i%2!=0)
        {
            if(x==1)
            {
                if(sum1 < 0)
                    sum1--;
                else
                    sum1++;
            }
        }
        else
        {
            if(x==1)
            {
                if(sum1 > 0)
                    sum1--;
                else
                    sum1++;
            }
        }
    }

    if(sum1 >= k)
        cout<<"1"<<endl;
    else
        cout<<"2"<<endl;

  }
  return 0;
}
