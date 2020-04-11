#include<bits/stdc++.h>

using namespace std;

struct user
{
  int id;
  int fs;
  float ps;
};

int main()
{
    int p,j,i,x,u,su,testcases,flag=0,cont=0;
    char tp;
    vector<user> rankList;
    int marksMatrix[10005][30]={0};

    string str1,correct="A";

    cin>>p;

    int problems[30][4] = {0};


    for(i=1;i<=p;i++)
    {
       cin>>tp;

       cin>>problems[tp-'A' + 1][1];
       cin>>problems[tp-'A' + 1][2];

       marksMatrix[0][tp-'A'+1] = problems[tp-'A' + 1][1];


    }

    cin>>s>>su;

    user u1 ;

    for(i=1;i<=su;i++)
    {
      cin>>u1.id;

      cin>>tp;

      testcases = problems[tp-'A' + 1][2];

      cin>>x;

      flag=0;
      cont=0;

      for(j=1;j<=testcases;j++)
      {
        cin>>str1;

        if(str1==correct)
        {
          flag=1;
          cont++;
        }

        if(cont==testcases)
        {

        }

      }


    }

 return 0;
}
