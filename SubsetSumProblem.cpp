
/*******************************************

input : SumRequired
        Number of elements in element array
        Elements

output : path exists and the path in square brackets[]

*************
example 1 :

input : 59
        6
        10 0 -1 20 25 30

output : path exists
         [10,-1,20,30]
********************************************/



#include<bits/stdc++.h>

using namespace std;

vector<int> test;
//search smallest subeset of all subsets available function
void dfs( vector<int> finalPath , vector<int> path ,vector<int> dp[] , int row , int col , vector<int> elements ,int sizeOfPath)
{
    int i,x;

       if(dp[row-1][col-elements[row]] && col>=elements[row])
       {
           //cout<<"Pushing -> "<<elements[row]<<endl;
         path.push_back(elements[row]);

         if(col-elements[row]!=0)
         dfs(finalPath,path,dp,row-1,col-elements[row],elements,sizeOfPath);
         else
         {
            if(sizeOfPath==0)
            {
            //cout<<"Saving Path path size is "<<path.size()<<endl;
            sizeOfPath = path.size();

            test.clear();
          //  finalPath.clear();
            for(i=0;i<path.size();i++)
            {
                x = path[i];
            //    cout<<x<<" -> ";
             //   finalPath.push_back(x);
                test.push_back(x);
            }

            //cout<<"required sum "<<endl;

            }
            else
            {
              if(sizeOfPath>path.size())
              {
               sizeOfPath = path.size();

               test.clear();
              finalPath.clear();
              for(i=0;i<path.size();i++)
              {
                x = path[i];
              //  cout<<x<<" -> ";
              //  finalPath.push_back(x);
                test.push_back(x);
               }

               //cout<<"required sum "<<endl;
              }
            }
         }
         //cout<<"Poping -> "<<elements[row]<<endl;
         path.pop_back();
       }

       if(dp[row-1][col])
       {
         dfs(finalPath,path,dp,row-1,col,elements,sizeOfPath);
       }

}


int main()
{
    int sum,n,i,j,minn=0;

    //taking input
    cin>>sum;        //elements in array

    cin>>n; //number of elements in array


    vector<int> a(n+5);

    fill(a.begin(),a.end(),0);

   // cout<<"Elements are:"<<endl;
    for(i=1;i<=n;i++)    //array elements
    {
       cin>>a[i];
       if(minn>a[i])
        minn = a[i];
    }

    vector<int> dp[n+6];
    int x;

    for(i=0;i<=n+5;i++)
    {
      for(j=0;j<=sum+5;j++)
        dp[i].push_back(0);

    }

    dp[0][0]=1;
    for(i=1;i<=sum-minn+2;i++)
        dp[0][i]=0;

    for(i=0;i<=n;i++)
        dp[i][0]=1;

    //generating dp matrix
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=sum-minn+2;j++)
      {
          if(dp[i-1][j])
          {
                dp[i][j]=1;
          }
          else
          {
                if(j-a[i]>-1)
                  dp[i][j] = dp[i-1][j-a[i]];
          }


      }
    }

    /*
    for(i=0;i<=n;i++)
    {
      for(j=0;j<=sum;j++)
        cout<<dp[i][j]<<"  ";
      cout<<"\n";
    }
    */


    vector<int> finalPaths;
    vector<int> path;


    //finding path
    //cout<<"Calling DFS"<<endl;
    dfs(finalPaths,path,dp , n , sum , a , 0);

    if(dp[n][sum])
    {
    //Display path
    cout<<"Path exists"<<endl;
    cout<<"[";
        for(i=test.size()-1;i>=0;i--)
        {
            if(i)
            cout<<test[i]<<",";
            else
            cout<<test[i]<<"]";
        }

    }
    else
        cout<<"No such subset exists"<<endl;


 return 0;
}
