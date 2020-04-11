#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,cont,j,i;
    string s1;

    cin>>n;

    cont=0;

    while(n--)
    {
       cin>>s1;

       j=0;
       while(s1[j])
       {
          if(s1[j]=='1')
              cont++;
            j++;
       }
    }

     if(cont%2==0)
     {
       cout<<"B"<<endl;
       cout<<cont;
     }
     else
     {
       cout<<"A"<<endl;
       cout<<cont<<endl;
     }

    return 0;
}
