#include<bits/stdc++.h>

using namespace std;


int main()
{
//Omit before Submitting the Code
#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" ,"w" , stdout);
#endif

    long long int t;

    cin>>t;

    while(t--){
        long long int n,s,temp,x;
        vector<long long int> v;

        n=0;
        s=0;
        temp=0;
        x=0;
        v.clear();


        cin>>n>>s;

        temp=n;
        
        v.push_back(0);
        while(temp--){
            cin>>x;
            v.push_back(x);
        }
        
        long long int left=1 , right = 1 , i , current_sum=0,flag=0 , indexLeft , indexRight ;

        for(i=1;i<=n;i++){

            current_sum = current_sum + v[right];
            right++;


            while(current_sum > s && left < right){
                current_sum = current_sum - v[left];
                left++;
            }

            if(current_sum == s){
                flag=1;
                break;
            }


        }
        
    

        if(flag){
            cout<<left<<" "<<(right-1)<<"\n";
            //cout<<start<<" "<<(i-1)<<"\n";
        }
        else{
            cout<<"-1\n";
        }

    }


	return 0;
}