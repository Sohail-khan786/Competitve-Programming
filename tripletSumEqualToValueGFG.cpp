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
        long long int n,temp,x,i,sum,flag=0;
        vector<long long int> v;

        temp=0;
        x=0;
        n=0;
        v.clear();
        i=0;
        sum=0;
        flag=0;

        cin>>n>>sum;

        temp=n;
        while(temp--){
            cin>>x;
            v.push_back(x);

        }

        sort(v.begin(),v.end());
        
        flag=0;
        long long currentSum=0;
        for(i=0;i<v.size() ;i++){
            currentSum = sum;
            currentSum = currentSum - v[i];

            long long left=0 , right=v.size()-1,tempSum;
            while(left<right){

                if(left==i){
                    left++;
                    continue;
                }
                else if(right==i){
                    right--;
                    continue;
                }
                
                tempSum = currentSum - (v[left] + v[right]);
                if(tempSum==0){
                    flag = 1;
                    break;
                }
                else{

                    if(tempSum>0){
                        left++;
                    }
                    else{
                        right--;
                    }
                }

            }

            if(flag){
                break;
            }

            
        }

        if(flag){
            cout<<"1"<<"\n";
        }
        else{
            cout<<"0"<<"\n";
        }

    }
        


	return 0;
}