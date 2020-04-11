
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n=0,flag=1,x,i;
    vector<int> villians,players;

    cin>>t;

    while(t--)
    {
        flag=1;
        x=0;
        villians.clear();
        players.clear();

        cin>>n;

        for(i=1;i<=n;i++)
        {
          cin>>x;
          villians.push_back(x);
        }

        for(i=1;i<=n;i++)
        {
          cin>>x;
          players.push_back(x);
        }

        sort(villians.begin(),villians.end());
        sort(players.begin(),players.end());

        for(i=0;i<n;i++)
        {
          if(villians[i]>=players[i])
          {
              flag=0;
              break;
          }
        }

        if(flag)
            cout<<"WIN"<<endl;
        else
            cout<<"LOSE"<<endl;
    }

 return 0;
}
