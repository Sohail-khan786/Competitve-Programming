#include<bits/stdc++.h>

using namespace std;

int main()
{
  long long int n,i,j,cont,a[20],k,flag=1,p,tp=1;
  vector<string> v;
  string str1,str2;

  cin>>n;

  cont=0;


  for(i=1;i<=n;i++)
  {
   cin>>str1;
   v.push_back(str1);
  }

  for(i=0;i<n;i++)
  {
    for(p=0;p<n;p++)
    {
      flag=1;
      fill(a,a+20,0);
      str2.clear();

      if(p!=i)
      {
      str2 = v[i]+v[p];

      for(j=0;j<str2.length();j++)
      {
            a[ str2[j] - '0' ]++;
      }

      for(k=0;k<=9;k++)
      {
           if(a[k]==0)
           {
             flag=0;
             break;
           }
      }

      if(flag)
      {
        cont++;
      }

      }
    }
  }

 cout<<cont/2<<endl;

 return 0;

}
