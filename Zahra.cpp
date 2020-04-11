#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    string name,encode;
    char c;

    int secretKey = 3;

    name = "l oqyg w bdjuc . Yrw cug vkg oruw egdwwkiwo jkun , k jdxh hxht uhgq lp ob okig. l fcqv kpcjkqg ob okig ylvkqxv w";

    for(i=0;i<name.length();i++)
    {
      if(name[i]>='a' && name[i]<='z' && i%2==0)
       c = 'a' + (name[i] - 'a' - secretKey + 26)%26;
      else if (name[i]>='a' && name[i]<='z' && i%2==1)
       c = 'a' + (name[i] - 'a' - secretKey + 1 + 26)%26;
      else
       c = name[i];

       cout<<c;
    }

    cout<<endl;

  return 0;
}
