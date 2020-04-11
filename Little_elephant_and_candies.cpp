#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t,n,c,i,x;
  long int sum;
  cin>>t;
  vector<int> v;
  while(t--)
  {
      sum = 0 ;
      cin>>n>>c;
      for(i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
        sum = sum + x;
      }
      if(sum<=c)
        cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;
      v.clear();

  }
  return 0;
}
