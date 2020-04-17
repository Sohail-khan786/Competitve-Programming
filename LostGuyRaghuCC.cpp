#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int t,n,q,x,temp ,localMaxx = -2,i;
    vector< long long int>  maxx,answer;

    cin>>t;

    while(t--){


        maxx.clear();
        answer.clear();
        localMaxx = -2;



        temp=0;

        cin>>n>>q;

        temp=n;
        while(temp--){
            cin>>x;
            if(localMaxx<x){
                localMaxx = x;
            }

            maxx.push_back(localMaxx);
        }

        temp = q;
        while(temp--){
            cin>>x;

            answer.push_back(maxx[x-1]);
        }

        for(i=0;i<answer.size();i++){
            cout<<answer[i]<<endl;
        }


    }

  return 0;
}
