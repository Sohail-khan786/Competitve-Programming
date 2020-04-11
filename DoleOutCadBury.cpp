#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int p,q,r,s,i,j,k,cont=0,length,breadth,temp;


    cin>>p>>q>>r>>s;

    for(i=p;i<=q;i++)
    {
      for(j=r;j<=s;j++)
      {
        if(i>j)
         {
           length = i;
           breadth = j;
         }
         else
         {
           length = j;
           breadth = i;
         }


        while(true)
        {


            if(breadth>length)
             {
               temp = length;
               length = breadth;
               breadth = temp;
             }

             if(length==breadth)
             {
                cont++;
                break;
             }
             else if(length==1)
             {
               cont = cont+ breadth;
               break;
             }
             else if(breadth==1)
             {
               cont = cont + length;
               break;
             }
             else
             {
               length = length - breadth;
               cont++;
             }

        }
      }
    }

    cout<<cont;


    return 0;
}
