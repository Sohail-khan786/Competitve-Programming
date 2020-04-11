#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,q,l,r,j,i,x,sum=0,maxx=0,temp;
    vector<long long int> v,psum;

    cin>>n>>q;

    v.push_back(0);

    for(i=1;i<=n;i++)
    {
      cin>>x;
      v.push_back(x);
    }

    while(q--)
    {
        sum=0;
        maxx=0;
        psum.clear();

        cin>>l>>r;

       reverse(v.begin() + l , v.begin() + (r+1));


       psum.push_back(0);
       for(i=1;i<=n;i++)
       {
         sum = sum + v[i];
         psum.push_back(sum);
       }
       // cout<<endl;


       for(i=psum.size()-1;i>=1;i--)
       {
          for(j=i-1;j>=0;j--)
          {
             temp = psum[i] - psum[j];

             if(temp > maxx)
             {
              maxx = temp;
             }
          }
       }

       cout<<maxx<<endl;
       reverse(v.begin() + l , v.begin() + (r +1));



    }
    return 0;
}
