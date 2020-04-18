#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
int main(){
    
    //Omit before Submitting the Code
        #ifndef ONLINE_JUDGE
            freopen("input.txt" , "r" , stdin);
            freopen("output.txt" ,"w" , stdout);
        #endif

    ll t;
    cin>>t;

    while(t--){
        ll n=0,d=0,temp1=0,cont=0,temp2=0,x=0,count2=0;
        vector< ll > teamtyson , teamDynamo;
        
        
        n=0;
        x=0;
        count2=0;

        cin>>n;
        teamtyson.clear();
        d=0;
        temp1=0;
        cont=0;
        teamDynamo.clear();

        temp1 = n;
        while(temp1--){
            cin>>d;
            teamtyson.pb(d);
            count2++;
        }
        sort(teamtyson.begin(),teamtyson.end());

        temp2 = n;
        for(temp2=0;temp2<n;temp2++){
            cin>>x;
            teamDynamo.push_back(x);
            count2--;
        }

        
        sort(teamDynamo.begin(),teamDynamo.end());
        ll j=0;
        
        for(ll i=0;i<teamtyson.size();i++){
                
                if(teamtyson[i]>teamDynamo[j]){
                    //cout<<"cont happenning for -->>"<<team1[i]<<" vs "<<team2[j]<<endl;
                    j++;
                    cont++;
                    count2 = count2 + 2;
                    
                }
                
                
        }
        cout<<count2 -cont<<endl;
    }
    return 0;
}


