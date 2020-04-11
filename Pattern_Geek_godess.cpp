#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[1000],i,cont;
    string s;

    cin>>n;
    cin>>s;

    fill(a,a+1000,0);
    i=0;
    cont=0;

    if(s.length()%2==0)
    {
        i=0;
        cont=0;
       while(s[i])
       {
           a[s[i]]++;
           i++;
       }

       i=0;
       while(i<1000)
       {
           if(a[i]%2==1)
            cont++;
        i++;
       }

    }
    else
    {
        i=0;
        cont=0;
       while(s[i])
       {
           a[s[i]]++;
           i++;
       }


       i=0;
       while(i<1000)
       {
           if(a[i]%2==1)
            cont++;
        i++;
       }

       cont--;
    }

    cout<<cont<<endl;
    return 0;
}
