#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t , matches[] ={6,2,5,5,4,5,6,3,7,6},a,b,sum=0,total;

    cin>>t;


    while(t--)
    {
        a=0;
        b=0;
        sum=0;
        total=0;

        cin>>a>>b;

        sum = a + b;

        while(sum)
        {
          total = total + matches[sum%10];
          sum = sum/10;
        }

       cout<<total<<endl;
    }
  return 0;
}
