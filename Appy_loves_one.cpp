#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,k,i,x;

    int start1=0, start2=0,length1=0,length2=0,tempStart1=0,tempLenght=0 ;
    int  flagStart=1 , cont=0 , l1 , l2 , l3 , maxx , flag2 = 0 , temp=0 , flag3=1;

    string nums="";

    char ch;

    cin>>n>>q>>k;

    for(i=0;i<n;i++)
    {
      cin>>x;

      if(x==1)
      {
        nums = nums + "1";

        if(flag2)
        {
          flag2 = 0;
          temp = i;
        }
      }
      else
      {
        nums = nums + "0";

        if(flag3)
            flag2=1;

        flag3 = 0;
      }
    }

    //cout<<"String formed is "<<nums<<endl;

    for(i=0;i<n;i++)
    {

      if(nums[temp%n]=='1')
      {
        cont++;

        if(cont==1)
        {
          tempStart1 = temp;
        }
      }
      else
      {
        tempLenght = cont;

        if(flagStart)
        {
            start1 = tempStart1;
            start2 = tempStart1;
            length1 = tempLenght;
            length2 = tempLenght;
          flagStart=0;
        }
        else if(tempLenght >= length1)
        {
          start2 = start1;
          length2 = length1;

          start1 = tempStart1;
          length1 = tempLenght;
        }
        else if(tempLenght > length2)
        {
          start2 = tempStart1;
          length2 = tempLenght;
        }

        cont = 0;
      }

      temp++;
    }


    if(!flag3)
    {

      for(i=1;i<=q;i++)
      {
        cin>>ch;

        if(ch=='!')
        {
          start1++;
          start2++;

          start1 = start1%n;
          start2 = start2%n;
        }
        else
        {
            l1=length1;
            l2=length2;
            l3=0;
            maxx=0;

            if(start1 + length1 - 1 < n)
            {
              l1 = length1;
              maxx=l1;
            }
            else
            {
             /*
              l1 = length1 - ( (start1 + length1 - 1)%n + 1);
              l2 = (start1 + length1 - 1)%n + 1;
              l3 = length2;
              */


              l2 = n - start1;
              l1 = length1 - l2;

              if(start1 != start2)
              l3 = length2;
              else
                l3 = 0;

              maxx = max(max(l1,l2),l3);
            }

          if(maxx>k)
            cout<<k<<endl;
          else
            cout<<maxx<<endl;
        }
      }
    }
    else
    {
     for(i=1;i<=q;i++)
     {
         cin>>ch;

       if(ch=='?')
       {
         if(n>k)
           cout<<k<<endl;
         else
           cout<<n<<endl;
       }
     }
    }

  return 0;
}
