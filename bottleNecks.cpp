#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,j,tempCont=0,cont=1;
    vector< vector<string> >v(15);
    string str;

    //(long long int)

    cin>>n;

    for(i=1;i<=n;i++)
    {
       cin>>str;

       v[str[0] - '0'].push_back(str);
    }


    for(i=0;i<=9;i++)
    {
       sort(v[i].begin(),v[i].end());
    }

    for(i=0;i<=9;i++)
    {
      tempCont=0;
      if((long long int)v[i].size()>(long long int)1)
      {
        for(j=1;j<(long long int)v[i].size();j++)
        {
           if(v[i][j-1]==v[i][j])
            tempCont++;
           else
           {
            tempCont++;
            if(cont<=tempCont)
            {
              cont = tempCont;
            }
            tempCont=0;
           }

        }

        tempCont++;
        if(cont<=tempCont)
        {
              cont = tempCont;
        }
        tempCont=0;

      }
      else if(tempCont==1)
        tempCont++;

      if(cont<=tempCont)
        cont = tempCont;
    }

    cout<<cont;


  return 0;
}
