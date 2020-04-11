#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t,x,y,k,n,i,fg;
  int price,pages;
  pair<int,int> p;
  multimap<int,int> m;
  multimap<int,int>::iterator it;
  cin>>t;
  while(t--)
  {
    m.clear();
    fg=0;
    cin>>x>>y>>k>>n;
    x = x-y; //NUmber of pages more required ro complete the poem

    for(i=1;i<=n;i++)
    {
        cin>>pages>>price;
        p.first = price;
        p.second = pages;
        m.insert(p);
    }

    it = m.begin();

    //checking
    for(i=1;i<=n;i++)
    {
        if(it->first <= k && it->second>= x)
        {
            fg=1;
            cout<<"LuckyChef"<<endl;
            break;
        }
        it++;
    }
    if(fg==0)
    cout<<"UnluckyChef"<<endl;

  }
  return 0;
}

