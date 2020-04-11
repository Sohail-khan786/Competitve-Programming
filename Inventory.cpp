#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> freshGrocery[5] , farmFresh[5] ;
    vector< pair<int,int> > total[5];
    int i,x,j;   //i -> items , j -> warehouse


    for(i=0 ; i<=4 ; i++)
    {
       for(j=0;j<=4;j++)
       {
       cin>>x;
       freshGrocery[i].push_back(x);
       }
    }

    for(i=0 ; i<=4 ; i++)
    {
       for(j=0;j<=4;j++)
       {
       cin>>x;
       farmFresh[i].push_back(x);
       }
    }

    for(i=0 ; i<=4 ; i++)
    {
       for(j=0;j<=4;j++)
       {
           x = freshGrocery[i][j] + farmFresh[i][j];

           if(x)
           {
              total[i].push_back(make_pair(j,x));                     // i -> whareHouse Number   j-> item number  x->total quantity
           }
       }
    }


    //displaying Results


    for(i=0 ; i<=4 ; i++)
    {
       for(j=0 ; j<total[i].size() ; j++)
       {
         cout<<"WareHouse "<<i<<" has item "<<total[i][j].first<<" in quantity "<<total[i][j].second<<endl;

        //cout<<total[i][j].second;
       }
       cout<<endl;
    }

    // clearing memory

    for(i=0;i<=4;i++)
    {
       freshGrocery[i].clear();
       farmFresh[i].clear();
    }

  return 0;
}
