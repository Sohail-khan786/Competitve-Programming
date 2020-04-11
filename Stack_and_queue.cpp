#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long  int n,k,sum=0,x,t,j=1,sum2=0,i;
    vector<long long int> v , tp;
    vector<long long int>::iterator it;

    v.push_back(0);

    cin>>n>>k;

    t=k;

    for(i=1;i<=n;i++)
    {
       cin>>x;

       tp.push_back(x);

       if(i<=k)
       {
          sum = sum + x;

          v.push_back(sum);
       }

       if(i>n-k)
       {
         sum2 = sum2 + x;
       }
    }

    v[0] = v[0] + sum2;

    for(i=n-k,j=1 ; j<=k; i++,j++ )
    {
      sum2 = sum2 - tp[i];
      v[j] = v[j] + sum2;
    }

    sort(v.begin(),v.end());

     it = max_element(v.begin(),v.end());

    cout<<*it<<endl;


  return 0;
}
