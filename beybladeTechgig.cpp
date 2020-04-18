
//Testing new logic

#include<bits/stdc++.h>

using namespace std;

int main(){
    
    //Omit before Submitting the Code
        #ifndef ONLINE_JUDGE
            freopen("input.txt" , "r" , stdin);
            freopen("output.txt" ,"w" , stdout);
        #endif

    long long int t,n,d,temp,i,cont,j;
    vector< long long int > team1 , team2;

    cin>>t;

    while(t--){
        team1.clear();
        team2.clear();
        n=0;
        d=0;
        temp=0;
        i=0;
        j=0;
        cont=0;

        cin>>n;

        temp = n;
        while(temp--){
            cin>>d;
            team1.push_back(d);
        }

        temp = n;
        while(temp--){
            cin>>d;
            team2.push_back(d);
        }

        sort(team1.begin(),team1.end());
        sort(team2.begin(),team2.end());





        j=0;
        for(i=0;i<team1.size();i++){

                while(i<team1.size() && team1[i]<=team2[j]){
                    i++;

                    
                }

                if(team1[i]>team2[j]){
                    j++;
                    cont++;
                }


        }

        cout<<cont<<endl;
    }
    return 0;
}


