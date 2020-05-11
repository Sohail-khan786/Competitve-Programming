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
        long long int n,m,temp,x;
        vector<long long int> v1,v2,unionSet,intersectionSet;
        
        n=0;
        m=0;
        temp=0;
        x=0;
        v1.clear();
        v2.clear();
        unionSet.clear();
        intersectionSet.clear();

        cin>>n>>m;

        temp=n;
        while(temp--){
            cin>>x;
            v1.push_back(x);
        }

        temp=m;
        while(temp--){
            cin>>x;
            v2.push_back(x);
        }

        //sort only is the arrays are not sorted
        // sort(v1.begin(),v1.end());
        // sort(v2.begin(),v2.end());

        long long int i,j=0,breakLoop=0;;

        for(i=0;i<v1.size();i++){
            
            for(j;j<v2.size();){

                while(v2[j] < v1[i] && j<v2.size()){
                    
                    //to not let duplicate be entered twce
                    while(v2[j]==v2[j+1] && j<v2.size()-1)j++;
                    
                    unionSet.push_back(v2[j]);
                    j++;
                }

                if(v2[j]==v1[i] && j<v2.size()){
                    //to not let duplicate be entered twce
                    while(v2[j]==v2[j+1] && j<v2.size()-1)j++;

                    intersectionSet.push_back(v2[j]);
                    j++;
                    break;
                }
                else{
                    break;
                }


            }
            
            //to not let duplicate be entered twce
            while(v1[i]==v1[i+1] && i<v1.size()-1)i++;

            unionSet.push_back(v1[i]);

        }

        while(j<v2.size()){
               //to not let duplicate be entered twce
                while(v2[j]==v2[j+1] && j<v2.size()-1)j++;


                unionSet.push_back(v2.size());
                j++;
        }


        // cout<<"the union elements are ";

        // for(i=0;i<unionSet.size();i++){
        //     cout<<unionSet[i]<<" ";
        // }
        // cout<<"\n";

        // cout<<"the Intersection  elements are ";

        // for(i=0;i<intersectionSet.size();i++){
        //     cout<<intersectionSet[i]<<" ";
        // }
        // cout<<"\n";

        cout<<unionSet.size()<<"\n";


    }


	return 0;
}