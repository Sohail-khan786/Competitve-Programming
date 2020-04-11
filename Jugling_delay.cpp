#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,i,si,ji,cont;

    cin>>t;

    while(t--)
    {
        n=0;
        cont=0;

      cin>>n;

      for(i=0;i<n;i++)
      {
        cin>>si>>ji;

        ji = ji - si;

        if(ji>5)
            cont++;
      }

      cout<<cont<<endl;
    }


 return 0;
}
