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
        long long n,temp,x,closestToZeroSoFar,currentNearnessToZero;
        vector<long long int> v;

        v.clear();
        temp=0;
        x=0;
        n=0;
        closestToZeroSoFar = INT_MAX;


        cin>>n;

        temp=n;
        while(temp--){
            cin>>x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());;

        int left , right;
        left = 0;
        right = v.size()-1;
        
        closestToZeroSoFar=v[left] + v[right];
        while(left<right){
            currentNearnessToZero = v[left] + v[right];

            if( currentNearnessToZero == 0) {
                closestToZeroSoFar=0;
                break;
            }
            else{
                if(currentNearnessToZero > 0){
                    right--;
                }
                else{
                    left++;
                }


                if(abs(closestToZeroSoFar)>abs(currentNearnessToZero)){
                        closestToZeroSoFar = currentNearnessToZero;
                    }

                

                
            }


        }

        cout<<closestToZeroSoFar<<"\n";



    }
}