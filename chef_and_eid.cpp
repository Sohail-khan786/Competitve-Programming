#include<bits/stdc++.h>

using namespace std;

int main()
{
  int x,t,n,i,minn;
  vector<int> v;
  cin>>t;
  while(t--)
  {
    cin>>n;

    minn=0;

    for(i=1;i<=n;i++)
    {
       cin>>x;
       v.push_back(x);
    }

    sort(v.begin(),v.end());

    minn = v[1] - v[0];

    for(i=0;i<n-1;i++)
    {
      minn = min(minn,v[i+1]-v[i]);
      if(minn==0)
        break;
    }
    v.clear();
    cout<<minn<<endl;

  }
  return 0;
}
