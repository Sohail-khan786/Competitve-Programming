#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long  int x,y,n,sum=0,sub=0,i,h,j;

    cin>>x>>y>>n;

    sub = x - y;

    for(i=1;i<=n;i++)
    {
       cin>>h;



          j= 0;

             while(j<h)
             {
                 if(sum)
                    j = j - y;

               sum++;
               j = j + x;
             }

       /*if(h%sub!=0)
       {
       if(h%sub<=y)
        sum = sum + h/sub;
       else
        sum = sum + h/sub + 1;
       }
       else
       {
           j= 0;

             while(j<h)
             {
                 if(sum)
                    j = j - y;

               sum++;
               j = j + x;
             }
       }*/
    }

    cout<<sum<<endl;

 return 0;
}
