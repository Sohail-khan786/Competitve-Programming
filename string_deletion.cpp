#include<bits/stdc++.h>>

using namespace std;

int main()
{
    priority_queue <int,vector<int>,greater<int> > pq;

     int i,n,charCount[30]={0},turn=0,d,sub;
     string s;

     cin>>n;
     cin>>s;


     i=0;
     while(i<n)
     {
         charCount[s[i]-'a'+1]++;
      i++;
     }

     for(i=1;i<=26;i++)
     {
       if(charCount[i]>0)
       {
         pq.push(charCount[i]);
       }
     }

     d=0;
     sub=0;
     turn=0;
     while(pq.empty()== false)
     {
        d = pq.top();

        if(d==sub)
        {

        }
        else
        {
          turn++;
          sub = d;
        }

        pq.pop();
     }


     cout<<turn<<endl;

    return 0;
}
