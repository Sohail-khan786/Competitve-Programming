#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,even[15]={0},odd[15]={0},cont=0,i,bitScore,x,last,mid,high,tempCont=0;
    vector<long long int> v;

    cin>>n;

    for(i=1;i<=n;i++)
    {

        cin>>x;

        bitScore =0;
        v.clear();

        last = x%10;
        x = x/10;
        v.push_back(last);

        mid = x%10;
        x = x/10;
        v.push_back(mid);

        high = x%10;
        x = x/10;
        v.push_back(high);


        sort(v.begin(),v.end());

        bitScore = bitScore + v[0]*7;
        bitScore = bitScore + v[2]*11;
        x = bitScore;


        last = x%10;
        x = x/10;

        mid = x%10;
        x = x/10;


        bitScore = mid*10 + last;

        if(i%2==0)
        {
           even[mid]++;
        }
        else
        {
          odd[mid]++;
        }


        /*
        if(high >= mid && high >= last )
        {
            bitScore = bitScore + high*11;
        }
        else if( mid >=high && mid>=last)
        {
          bitScore = bitScore + mid * 11;
        }
        else
            bitScore = bitScore + last*11;
         */

    }

    for(i=0;i<=9;i++)
    {
      tempCont = 0;
      if(even[i]==2)
        tempCont++;
      else if(even[i]>2)
        tempCont = tempCont + 2;

      if(odd[i]==2)
        tempCont++;
      else if(odd[i]>2)
        tempCont = tempCont + 2;


       if(tempCont==1)
        cont++;
       else if(tempCont>=2)
         cont = cont + 2;


    }


   cout<<cont;




 return 0;
}
