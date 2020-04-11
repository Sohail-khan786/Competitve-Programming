#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,i,flag=0,pos , powerOf2,numCreated;
    string num;

    cin>>t;

    while(t--)
    {
      cin>>num;

      flag=0;
      pos=0;
      numCreated=0;
      powerOf2=0;


      for(i=num.length() - 1 ; i>=0 ; i--)
      {
        if(num[i]=='0')
            continue;

        pos = i;
        break;
      }

      for(i=0;i<=pos;i++)
      {
       numCreated = numCreated*10 + (num[i]-'0');
      }

      if(numCreated==0){
        flag-0;
      }
      else if(numCreated == 1)
        flag=1;
      else
      {
        powerOf2 = log((double)numCreated)/log(2.0);

        if((double)powerOf2 == log((double)numCreated)/log(2.0))
        {
          if(powerOf2<=num.length()-1-pos)
            flag=1;
        }
      }

      if(flag)
        cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;

    }
 return 0;
}
