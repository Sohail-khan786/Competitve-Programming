#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,sum=0,x,i,divSum=0,flag=0;
    double average;
    vector<long long int> v;

    cin>>t;

    while(t--)
    {
       sum=0;
       divSum=0;
       average=0;
       v.clear();
       flag=0;
       x=0;


       cin>>n;

       for(i=0;i<n;i++)
       {
         cin>>x;
         v.push_back(x);

         divSum = divSum + x/n;
         x = x%n;

         sum = sum + x;

         if(sum>=n)
         {
            divSum = divSum + sum/n;
            sum = sum%n;
         }
       }

       if(sum==0)
         average = divSum;
       else
         average = divSum + ((sum*1.0)/n);

        for(i=0;i<n;i++)
        {
          if(v[i]==average)
          {
              flag=1;
              break;
          }
        }

        if(flag)
            cout<<(i+1)<<endl;
        else
            cout<<"Impossible"<<endl;


    }
 return 0;
}
