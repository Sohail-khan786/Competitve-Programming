#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,t,flag,n,m;

    int a[10][10];

    char ch;

    cin>>t;

    while(t--)
    {
        flag=1;

        //fill(a, a + 99 , 0);

        cin>>n>>m;

        for(i=1;i<=n;i++)
        {
          for(j=1;j<=m;j++)
          {
            cin>>ch;

            if(ch=='#')
                a[i][j]=1;

            if(ch=='#' && i == 2 ) flag=0;
            if(ch=='#' && i == n-1 ) flag=0;
            if(ch=='#' && j == 2 ) flag=0;
            if(ch=='#' && j == m-1 ) flag=0;
          }
        }

       if(flag)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }

    return 0;
}
