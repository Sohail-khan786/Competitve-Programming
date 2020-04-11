#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t,n,m,i,j,flag;
   int a[100][100] = {0};
   char ch;

   cin>>t;

   while(t--)
   {
      // cout<<"Starting Next Problem"<<endl;

     //  fill(a,a+100,0);
       flag = 1;
       n=0;
       m=0;


     cin>>n>>m;
     //cout<<"n="<<n<<"  m="<<m<<endl;

     for(i = 2 ;  i<=n+1 ;i++)
     {
       for(j = 2 ; j<=m+1 ; j++)
       {
          cin>>ch;

          if(ch=='#')
            a[i][j]=1;

          if(ch=='#' && i == 3) flag=0;
          if(ch=='#' && i == n) flag=0;
          if(ch=='#' && j == 3) flag=0;
          if(ch=='#' && j == m) flag=0;
       }
     }

     for(i = 2 ; flag && i<=n+1 ;i++)
     {
       for(j=2 ; flag && j<=m+1 ; j++)
       {
         cout<<"Checking for i="<<i<<" j="<<j<<endl;
          if(a[i][j]==1)
          {
              if

          }

        }
     }


     if(flag)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;

    for(i = 2 ;  i<=n+1 ;i++)
     {
       for(j=2 ; j<=m+1 ; j++)
        a[i][j]=0;
     }

    // cout<<"After problem solving"<<endl;
    // cout<<"n="<<n<<"  m="<<m<<endl;
   }
}
