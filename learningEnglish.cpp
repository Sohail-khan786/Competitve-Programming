#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> v;
    string s1,s2;
    char x;
    int i=0;

    getline(cin,s2);

    i=0;
    while(i < s2.length())
    {
      x = s2[i];

      if(x==' ' || i==s2.length()-1)
      {
        if(i==s2.length()-1)
         s1 = s1 + x;

         v.push_back(s1);
         s1.clear();

         if(x==10)
            break;
      }
      else
      {
       s1 = s1 + x;
      }

    i++;
    }

    for( i = v.size()-1 ; i>=0 ; i--)
    {
      cout<<v[i]<<' ';
    }

  return 0;
}
