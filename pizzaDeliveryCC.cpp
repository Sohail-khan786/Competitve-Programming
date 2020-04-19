//testing New logic

#include<bits/stdc++.h>

using namespace std;


int main()
{
    //Omit before Submitting the Code
#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" ,"w" , stdout);
#endif


	long long int t,n,x,temp,d,feulFilledCount=0,feul=0,maxx,i,j;
    vector<long long int> h,k;

    cin>>t;

    while(t--){
        n=0;
        x=0;
        feulFilledCount=0;
        feul=0;
        d=0;
        h.clear();
        k.clear();
        maxx=-1;
        i=0;
        j=0;



        cin>>n;

        
        temp=n;
        while(temp--){
            cin>>x;
            x = x*2;
            h.push_back(x);

            if(x>maxx){
                maxx=x;
            }
        }

        temp=n;
        k.push_back(0);
        while(temp--){
            cin>>x;
            k.push_back(x);
        }

        long long int dp[k.size()][maxx+1];
        
        for(i=0;i<maxx+1;i++){
            dp[0][i]=1000000000;
        }

        for(i=0;i<k.size();i++){
            dp[i][0]=0;
        }

        
        for(i=1;i<k.size();i++){
            for(j=1;j<maxx+1;j++){

                dp[i][j]=dp[i-1][j];

                if(j>=k[i]){

                    dp[i][j] = min( dp[i][j] ,1+dp[i][j-k[i]]);
                    
                }

                
            
            }
        }


        

        feulFilledCount=0;
        long long lastRow = k.size()-1;
        for(i=0;i<h.size();i++){

            //cout<<"adding col-value="<<k[i]<<"  with feulFilledValue="<<dp[lastRow][k[i]]<<endl;
            feulFilledCount = feulFilledCount + dp[lastRow][h[i]];
        }

        cout<<feulFilledCount<<"\n";



    }

    return 0;
}


