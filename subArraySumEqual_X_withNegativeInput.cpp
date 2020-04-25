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

        cin>>n;

        temp = n;
        while(temp--){
            cin>>x;
            v.push_back(x);
        }

        cin>>s;

        long long int currentSum=0,i , cont=0;
        unordered_map<long long int , long long int> m;

        for(i=0;i<n;i++){
            currentSum = currentSum + v[i];

            if(currentSum == s){
                cont++;
                //cout<<"adding 1 for "<<currentSum<<"\n";
            }
            
            //find give m.end() address is the key u r finding is not present in the map
            if(m.find(currentSum - s) != m.end()){
                cont = cont + m[currentSum - s];
                //cout<<"adding for remaining "<<currentSum - s<<"  and value="<<m[currentSum - s]<<"\n";
            }
            
            //this statement inserts key=currentSum with value=i in map if not present and updates it if the key is present
            //atleast for unordered map
            m[currentSum]++;

            //cout<<"key="<<currentSum<<"    value="<<m[currentSum]<<"\n";
            
            
        }

        cout<<cont<<"\n";

    }


	return 0;
}