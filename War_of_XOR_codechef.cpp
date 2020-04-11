#include<bits/stdc++.h>
#define MAXX 100005

using namespace std;

int main()
{
    //int t,n,i,j,x,mx,xor,c,rem;
   int t,n,i,j,x;
   int xr,rem;
    vector<int> a,v;
    int prime[MAXX];
    fill(prime,prime+MAXX,1);
    prime[0]=0;
    prime[1]=0;

    cin>>t;


    for(i=2;i<=sqrt(MAXX);i++)
    {
        if(prime[i])
        {
            //cout<<i<<endl;

            for(j=i+i;j<=MAXX;j=j+i)
            {
                prime[j]=0;
            }
        }
    }

    while(t--)
    {
        int cn;
        a.clear();
        n=0;
        cn=0;
        v.clear();

        cin>>n;

        for(i=1;i<=n;i++)
        {
            cin>>x;
            a.push_back(x);
        }

        //XOR all pairs

        //cout<<"XOR of all pairs"<<endl;

        for(i=0;i<a.size();i++)
        {
            for(j=i+1;j<a.size();j++)
            {
                //xor
                xr = (a[i] | a[j]) & (~a[i] | ~a[j]);

               // cout<<a[i]<<"XOR"<<a[j]<<"="<<xr<<endl;

                if(xr%2==0)
                {
                  v.push_back(xr);
                }
            }
        }


       //cout<<"Prime Pairs equal to XOR pairs"<<endl;
        for(i=0;i<v.size();i++)
        {
            for(j=2;i<=v[i]/2;j++)
            {
              if(v[i]>j)
              {
                if(prime[j])
                {
                   rem  = v[i] - j;

                   if(a[rem])
                   {
                    //cout<<j<<"+"<<rem<<"="<<v[i]<<endl;
                    cn++;
                    break;
                   }

                }
              }
              else
              {
                  break;
              }
            }
        }


        cout<<cn<<endl;
    }
    return 0;
}
