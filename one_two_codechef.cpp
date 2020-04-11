#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,i,j,sum=0,cont;
    vector<int> v;
    set<int> s;

    cin>>t;

    while(t--)
    {
        v.clear();
        s.clear();
        sum=0;
        cont=0;

        v.push_back(sum);

        cin>>n;

        int ck[2*n+5];

        fill(ck,ck+(2*n+5),1);
        ck[0]=0;

        for(i=1;i<=n;i++)
        {
            cin>>x;
            sum = sum+x;
            v.push_back(sum);
        }


      for(j=n;j>=1;j--)
      {
          for(i=j-1;i>=0;i--)
          {
              x = v[j] - v[i];
              if(ck[x])
              {
                  ck[x]=0;
                  cont++;
              }
          }
      }

      cout<<cont<<endl;

    }
    return 0;
}
