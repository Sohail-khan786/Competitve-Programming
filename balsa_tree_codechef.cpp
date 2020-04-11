#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t,a[20]=0;
  string s;
  cin>>t;
  while(t--)
  {
      memset(a,0,sizeof(a));
      cin>>s;
      for(i=1;i<=s.length();i++){
        a[s[i-1] - '0']++;
      }
      if(s.length())
  }
  return 0;
}
