#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,t,n,m,p,l,r;
    vector< pair<long long int ,long long int> > v;
    vector< pair<long long int, long long int> >::iterator it=v.begin();
    pair<long long int,long long int> pp;

    cin>>t;

    while(t--)
    {
       v.clear();

      cin>>n>>m;

      for(i=1;i<=n;i++)
      {
        cin>>l>>r;

        if(l<r)
        v.push_back(make_pair(l,r));
        else
        v.push_back(make_pair(r,l));

      }

      sort(v.begin(),v.end());

      for(i=1;i<=m;i++)
      {


        cin>>p;
         pp = make_pair(p,-1);

        it = lower_bound(v.begin(),v.end(),pp);

        if(it==v.end())
        {
           if((it-1)->first < p  && (it-1)->second > p)
            cout<<"0"<<endl;
           else
           cout<<"-1"<<endl;
        }
        else if(it->first == p)
        {
          cout<<"0"<<endl;
        }
        else if(it!=v.begin() && (it-1)->first < p && (it-1)->second > p )
        {
          cout<<"0"<<endl;
        }
        else
        {
           p = (it->first) - p;

           cout<<p<<endl;
        }
      }
    }
 return 0;
}
