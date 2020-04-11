#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,n,rem,fg=0;
    int a[]={ 6, 10, 14, 15, 21, 22, 26, 33, 34, 35, 38, 39, 46, 51, 55, 57, 58, 62, 65, 69, 74, 77, 82, 85, 86, 87, 91, 93, 94, 95, 106, 111, 115, 118, 119, 122, 123, 129, 133, 134, 141, 142, 143, 145, 146, 155, 158, 159, 161, 166, 177, 178, 183, 185, 187, 194};
    vector<int> v;

    for(i=1;i<=sizeof(a)/sizeof(int);i++)
    {
      v.push_back(a[i-1]);
    }
    cin>>t;

    while(t--)
    {
     n=0;
     fg=0;

      cin>>n;

      vector<int>::iterator it = v.begin();

      for( ; it!=v.end() ; it++)
      {
         rem = n - *it;

         if( binary_search(v.begin(),v.end(),rem))
         {
             fg=1;
             break;
         }
      }

      if(fg)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }


  return 0;
}
