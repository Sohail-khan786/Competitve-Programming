#include<bits/stdc++.h>

using namespace std;

void dfs(vector<int> coprimes[] , int visited[] , int source ,vector<int> path , int n , int *status,vector<int> v)
{
    //cout<<"Entering DFS to visit  "<<source<<endl;
    if(visited[source])
    {
       visited[source] = 0;
       path.push_back(source);
    }

    if( path.size() == n)
    {
        //cout<<"Making Status 1"<<endl;
        *status = 1;
    }
    else
    {
       for(int i=1 ; i <= coprimes[source].size() ; i++)
       {
        //cout<<"Next node to visit in DFS "<<coprimes[source][i-1]<<endl;
          if(visited[ coprimes[source][i-1] ])
                  dfs(coprimes , visited , coprimes[source][i-1] , path , n , status , v);
       }
    }

   path.pop_back();
   visited[source]=1;
   return ;
}

int main()
{
    int t,n,x,flag=1 , lenght = 1 , status = 0;
    vector<int> v, b ;
    vector<int> coprimes[51] , path;
    int visited[51]={1};

    cin>>t;


    while(t--)
    {
        flag=1;
        lenght = 1;
        //cout<<"Making Status 0"<<endl;
        status = 0;
        v.clear();
        b.clear();
        path.clear();
        for(int i = 0 ;i<51 ;i++) coprimes[i].clear();
        fill(visited , visited+51 , 1);

       cin>>n;

       for(int i = 0 ; i<n ;i++)
       {
         cin>>x;

         v.push_back(x);

         if(i>0)
         {
            if(v[i-1] != v[i])
                flag = 0;
         }

       }

       if(flag == 1)
       {
          if(v[n-1]==47)
                v[n-1] = 43;
          else
                v[n-1] = 47;


          //cout<<"flag="<<flag<<" status="<<status<<" all same"<<endl;

          cout<<"1"<<endl;
          for(int i = 0; i < n ; i++)
          {
             cout<<v[i]<<" ";
          }
          cout<<endl;

       }
       else
       {

           for(int i = 0 ; i< v.size() ; i++ )
            {
                    for(int j = 0 ; j < v.size() ; j++)
                    {
                        if(v[i]==v[j]  || v[i]%v[j]==0 || v[j]%v[i]==0) continue;

                        int co_check = __gcd(v[i],v[j]);

                        if(co_check == 1)
                        {
                            coprimes[v[i]].push_back(v[j]);
                        }
                    }
            }


           dfs(coprimes, visited , v[0] , path , n , &status , v) ;

           if(status)
           {
             //  cout<<"flag="<<flag<<" status="<<status<<" all connected"<<endl;

              cout<<"0"<<endl;
              for(int i = 0; i < n ; i++)
              {
               cout<<v[i]<<" ";
               }
               cout<<endl;
           }
           else
           {
              if(v[n-1]==47)
                  v[n-1] = 43;
              else
                  v[n-1] = 47 ;

               //cout<<"flag="<<flag<<" status="<<status<<" some islands"<<endl;
               cout<<"1"<<endl;
               for(int i = 0; i < n ; i++)
               {
                cout<<v[i]<<" ";
                  }
               cout<<endl;
           }
       }
    }
  return 0;
}
