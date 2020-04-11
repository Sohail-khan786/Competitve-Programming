#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,n,sum=0,m=1000000007;
    vector<long long int > v,p;

    // v -> normal DP original array
    // p -> one time 3 wali jump wala array

    v.push_back(1);
    v.push_back(1);
    v.push_back(2);


    cin>>n;

    for(i=3;i<=n;i++)
    {
       sum = (((v[i-1]%m)+(v[i-2]%m))%m);
    /*
       sum = (sum + (v[i-3]%m))%m;

       sum = sum + (i-2) ;
    */
       v.push_back(sum);

       //cout<<sum<<" ";
    }

    //cout<<endl;


    p.push_back(0);
    p.push_back(1);
    p.push_back(2);

    for(i=3;i<=n;i++)
    {
      sum = (((p[i-1]%m)+(p[i-2]%m))%m);

      sum = (sum + (v[i-3]%m))%m;

      //cout<<sum<<" ";

      p.push_back(sum);
    }

    //cout<<endl;


    cout<<p[n]<<endl;

 return 0;
}
