#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,x,j,length,flagCopy,index1,index2,flag1,flag2,k,length2,m,nn;
    vector< pair<int,int> > maps[100005];
    vector< pair<int,int> >::iterator it1,it2,tp1,tp2;

    n=-1;

    cin>>t;

    while(t--)
    {
        for(i=0;i<=n;i++)
            maps[i].clear();

        flag1=0;
        flag2=0;
        flagCopy=0;
        length=0;
        length2=0;

      //it = maps[0].begin();

      cin>>n;


      for(i=1;i<=n;i++)
      {
         cin>>x;

         maps[x].push_back(make_pair(x,i));

         //cout<<"Pushing "<<x<<" at index "<<i<<endl;
      }

      for(i=0;i<=n;i++)
      {
          if(flagCopy)
                break;

          length = maps[i].size();

          flagCopy=0;
          flag1=0;
          flag2=0;

          it1 = maps[i].begin();
          it2 = it1 + 1;

          if(length>1)
          {
             for(m=1;m<length;m++,it1++)
             {
               index1 = it1->second;

               if(maps[index1].size() )
               {
                   flag1=1;

               for(nn=m+1, it2=it1+1 ; nn<=length ; nn++ , it2++)
                {
                    index2 = it2->second;

                    if(maps[index2].size() && !flagCopy)
                    {
                      flag1=1;
                      flag2=1;
                      flagCopy=1;
                      break;
                    }
                    else
                    {
                      flag1=0;
                      flag2=0;
                    }
                 }
               }
               else
                continue;
             }
          }

       }

      if(flagCopy)
        cout<<"Truly Happy"<<endl;
      else
        cout<<"Poor Chef"<<endl;

      flagCopy = 0;


    }

  return 0;
}
