#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,k,i,x;
    vector<long long int> v;

    cin>>t;

    while(t--)
    {
      n=0;
      k=0;
      v.clear();

      cin>>n>>k;

      for(i=1;i<=n;i++)
      {
         cin>>x;
         v.push_back(x);
      }

      sort(v.begin(),v.end(),greater<int>());

      if(v[k]!=v[k-1])
        cout<<k<<endl;
      else
      {
         while(v[k-1]==v[k])
         k++;

       cout<<k<<endl;
      }
    }
  return 0;
}
