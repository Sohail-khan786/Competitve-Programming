
// We already Saw sorting apprach 
// now lets see hashing approach

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
        unordered_map<long long int, long long int> mp;
        long long int n,m,p,temp,x;
        vector<long long int> v1,v2,v3,unionSet,intersectionSet;
        
        
        n=0;
        m=0;
        p=0;
        temp=0;
        x=0;
        v1.clear();
        v2.clear();
        v3.clear();
        unionSet.clear();
        intersectionSet.clear();
        mp.clear();

        cin>>n>>m>>p;

        temp=n;
        while(temp--){
            cin>>x;
            v1.push_back(x);
            mp[x]++;

            if(mp[x]==2)mp[x]--;

        }

        temp=m;
        while(temp--){
            cin>>x;
            v2.push_back(x);
            if(mp[x]==1){
                mp[x]++;
            }
            
            if(mp[x]==3)mp[x]--;
        }

        temp=p;
        while(temp--){
            cin>>x;
            v3.push_back(x);

            if(mp[x]==2){
                mp[x]++;
            }

            if(mp[x]==3){
                intersectionSet.push_back(x);
                mp[x]++;
            }
        
        }

        
        long long int i;
        for(i=0;i<intersectionSet.size();i++){
            cout<<intersectionSet[i]<<" ";
        }

        if(intersectionSet.size()==0)cout<<"-1";

        cout<<"\n";


    }


	return 0;
}