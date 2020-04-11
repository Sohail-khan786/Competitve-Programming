#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,sum=0,ck,cont=0,i,j,d;
    vector<int> v;

    v.push_back(sum);
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>x;
        sum=sum + x;
        v.push_back(sum);
    }

     j = v.size()-1;

     for(j;j>=1;j--)
     {
         for(i=j-1;i>=0;i--)
         {
             sum = v[j] - v[i];
             d = sum;
             sum = sqrt(sum);

             if(sum*sum == d)
                cont++;
         }
     }

     cout<<cont<<endl;
    return 0;
}
