#include<bits/stdc++.h>

using namespace std ;

int main()
{
    long long int t , n ,minn=200,maxx=0,i,x,indexMin=0,indexMax=0;

    cin>>t;

    while(t--)
    {
      minn=200;
      maxx=0;
      i=0;
      x=0;
      n=0;
      indexMin=0;
      indexMax=0;


      cin>>n;

      for(i=0;i<n;i++){

        cin>>x;

        if(x>=maxx){
            maxx = x;
            indexMax=i;
        }

        if(x<=minn){
            minn = x;
            indexMin=i;
        }

      }
      if(indexMin<indexMax)
        cout<<minn<<" "<<maxx<<endl;
      else
        cout<<maxx<<" "<<minn<<endl;

    }
  return 0;
}
