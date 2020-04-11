#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<set>
#define max 1000000007
#define fori(s,n) for (int i=s;i<n;i++)
using namespace std;

int main()
{
    int t;
    cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     int temp=n,count=0;
     long long yn=0;
     vector<int> v;
     while(temp!=0)
     {
         v.push_back(temp%10);
         temp=temp/10;
         count++;
     }

     reverse(v.begin(),v.end());
     count=count-1;

     for(int i=0;i<=count;i++)
     {
         int q=i;
         for(int j=0;j<=count;j++)
         {
             yn=yn%1000000000;
             yn=(10*yn+v[q]);
             q++;
             if(q>count)
                q=0;
         }
     }

     cout<<yn%max<<endl;
   }


    return 0;
}
