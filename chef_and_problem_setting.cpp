#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n,m,flag1,flag2,flag3,c,j;
    string str1,str2,correct="correct";
    cin>>t;
    while(t--)
    {
        flag1=0;
        flag2=1;
        flag3=1;
        c=0;

        cin>>n>>m;

        for(i=1;i<=n;i++)
        {
         j=0;

          cin>>str1>>str2;

          if(str1==correct)
          {
              while(str2[j])
              {
                  if(flag2==0)
                    break;

                  if(str2[j]=='0')
                  {
                    flag2=0;
                    break;
                  }
                  j++;
              }
          }
          else
          {
              if(flag1<m)
                flag1=0;

             while(str2[j])
              {
                  if(flag1==m)
                    break;

                  if(str2[j]=='1')
                  {
                    flag1++;
                  }

                  j++;
              }
          }
        }
        if(flag2==0)
        {
            cout<<"INVALID"<<endl;
            continue;
        }

        if(flag1==m)
        {
            cout<<"WEAK"<<endl;
            continue;
        }

        cout<<"FINE"<<endl;
    }
    return 0;
}
