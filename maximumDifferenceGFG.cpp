#include<bits/stdc++.h>

using namespace std;

int main(){
        //Omit before Submitting the Code
#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" ,"w" , stdout);
#endif
    long long int t,n,x,firstElement=1,minimumSoFar,maxDifference;

    cin>>t;

    while(t--){
        n=0;
        x=0;
        firstElement=1;
        minimumSoFar=0;
        maxDifference=INT_MIN;



        cin>>n;

        while(n--){
            cin>>x;
            
            if(firstElement){
                firstElement=0;
                minimumSoFar=x;
            }
            else
            {
                
                    maxDifference = max(maxDifference,x-minimumSoFar);
                
                
                if(x<minimumSoFar){
                    minimumSoFar = x;
                }
            }
            
        }

        cout<<maxDifference<<"\n";

    }
    return 0;
}