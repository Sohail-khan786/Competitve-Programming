#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,flag,contR,contG;
    vector<pair<int,int> > v;
    string s1;

    cin>>t;

    while(t--)
    {
      s1.clear();
      flag=0;
      v.clear();
      contR=0;
      contG=0;


      cin>>s1;

      for(i=0; i<s1.length();i++)
      {
          if(s1[i]=='R')
          {
            if(i<s1.length())
            contR++;
          }
          else
          {
            if(i<s1.length())
            contG++;
          }

        if(s1[i]==s1[(i+1)%s1.length()])
        {
          flag++;

          if(s1[i]=='R')
          {
              //cout<<"push "<<i<<" "<<1<<" Red"<<endl;
            v.push_back(make_pair(i,1));
          }
          else
          {
            v.push_back(make_pair(i,2));

            //cout<<"push "<<i<<" "<<2<<" Green"<<endl;
          }
        }
      }

      if(flag>2)
        cout<<"no"<<endl;
      else if(flag==0)
        cout<<"yes"<<endl;
      else if(flag==1)
      {
            cout<<"no"<<endl;

      }
      else
      {
          //cout<<"v[0]="<<v[0].second<<"  "<<"v[1]="<<v[1].second<<endl;

         if(v[0].second == v[1].second)
            cout<<"no"<<endl;
         else
            cout<<"yes"<<endl;
      }
    }
  return 0;
}
