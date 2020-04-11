#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,k;
    float p;

    cin>>t;

    while(t--)
    {
      cin>>n>>k;

      if(n==1)
        cout<<"1.000000"<<endl;
      else if(n==2)
        cout<<"0.000000"<<endl;
      else
      {
         n = n - k*2;

         if(n<=0)
            cout<<"1.000000"<<endl;
         else
         {
            if(n==1 || n==2)
                cout<<"0.500000"<<endl;
            else
            {
              p = 1.0 / n;

              cout<<fixed;
              cout<<setprecision(6)<<p<<endl;
            }

         }
      }
    }
 return 0;
}
