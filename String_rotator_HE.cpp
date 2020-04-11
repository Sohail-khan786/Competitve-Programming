#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,len,i;
    string s;
    vector<char> d;
    cin>>n;
    cin>>s;
    len= s.length();
    for(i=1;i<=len;i++)
    {
        d.push_back(s[i-1]);

        //checking vector
       // cout<<d[i-1]<<endl;
    }

    i=1;

    if(n<0)
    {
        //rotate anti clockwisw
        n = n *(-1);
        while(i<=len)
        {
        s[i-1] = d[(i-1+n)%(len)];
        i++;
        }
        n = n *(-1);
    }

    i=0;
    if(n>0)
    {
        //rotate clockwise
      while(i<=len-1)
      {
      s[i] = d[(len - n + i)%(len)];
      i++;
      }
    }
    cout<<s<<endl;
    return 0;
}
