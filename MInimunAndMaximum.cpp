#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t , n  , noZero , noOne , i , digit;
    string k;
    vector<long long int> v;
    long long mod=0;

    cin>>t;

    while(t--)
    {
      k.clear();
      v.clear();
      mod=0;
      n=0;
      noZero = 0;
      noOne = 0;

      cin>>n;
      cin>>k;

      for(i=0;i<k.length();i++)
      {
         digit = k[i] - '0';

         mod = mod * 10 + digit;

         mod = mod % n;
      }


      noZero = n - mod;
      noOne = mod;

      /*
      noZero = n - (k%n);
      noOne = k%n;
      */

      if(noZero==noOne)
        cout<<(noZero*2 - 1)<<endl;
      else if(noZero>noOne)
        cout<<(noOne*2)<<endl;
      else
        cout<<(noZero*2)<<endl;


    }
  return 0;
}
