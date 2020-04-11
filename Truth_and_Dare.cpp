#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,tr,dr,ts,ds,i,trr[110],drr[110],flag=0,x ;

    cin>>t;

    while(t--)
    {
      fill(trr,trr+110,0);
      fill(drr,drr+110,0);
      //fill(tsr,trr+105,0);
      //fill(dsr,trr+105,0);
      flag=1;

      cin>>tr;

      for(i=1;i<=tr;i++)
      {
        ;
        cin>>x;
        trr[x]++;

         //cout<<"truth "<<x<<" can be performed "<<endl;

      }

      cin>>dr;

      for(i=1;i<=dr;i++)
      {
        cin>>x;
        drr[x]++;

        //cout<<"Dare "<<x<<" can be performed with value"<<drr[x]<<endl;

      }


      cin>>ts;

      for(i=1;i<=ts;i++)
      {
        cin>>x;

        //cout<<"truth "<<x<<" with value "<<trr[x]<<" is to be performed"<<endl;

        if(trr[x]==0)
        {
            flag=0;
          //  cout<<"truth task cannot be performed"<<endl;
        }
        else
        {
         //cout<<"truth task can be performed"<<endl;
        }
      }

      cin>>ds;

      for(i=1;i<=ds;i++)
      {
          cin>>x;

          //cout<<"Dare "<<x<<" with value "<<drr[x]<<" is to be performed"<<endl;

        if(drr[x]==0)
        {
            flag=0;
           // cout<<"Dare task cannot be performed"<<endl;
        }
        else
        {
         // cout<<"Dare task can be performed"<<endl;
        }
      }

      if(flag==1)
        cout<<"yes"<<endl;
      else
        cout<<"no"<<endl;
    }
 return 0;
}
