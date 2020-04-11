#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t,n,d,temp,i,cont,j,maxx=-1,maxx2=0,p;
    vector< long long int > team1(100005) , team2(100005);
    map<long long int , long long int> m1,m2;
    map<long long int , long long int>::iterator it;


    cin>>t;

    while(t--){

        fill(team1.begin(),team1.end(),0);
        fill(team2.begin(),team2.end(),0);
        n=0;
        d=0;
        temp=0;
        i=0;
        j=0;
        p=0;
        cont=0;
        maxx2=-1;
        maxx=-1;

        cin>>n;

        temp = n;
        while(temp--){
            cin>>d;
            team1[d]++;

            if(d>maxx)
                maxx=d;

            if(team1[d]==1){
                m1.insert(make_pair(d,team1[d]));
            }
            else{
                m1[d]++;
            }



        }

        temp = n;
        while(temp--){
            cin>>d;
            team2[d]++;
             if(d>maxx2)
                maxx2=d;

            if(team2[d]==1){
                m2.insert(make_pair(d,team2[d]));

            }
            else{
                m2[d]++;
            }
        }

        long long int team11[n] , team22[n];

        for(it=m1.begin();it!=m1.end();it++){
            cout<<"key = "<<it->first<<"   value ="<<it->second<<endl;
        }

         for(it=m2.begin();it!=m2.end();it++){
            cout<<"key = "<<it->first<<"   value ="<<it->second<<endl;
        }

        /* second Logic for couting
        i=0;
        j=0;
        p=0;
        maxx = max(maxx2,maxx);
        for(p=0;p<=maxx;p++){


            if(team1[p]){
                m1.insert(make_pair(p,team1[p]));
                cout<<"team 1 -->>"<<" power = "<<p<<"   quantity = "<<team1[p]<<endl;
            }

             if(team2[p]){
                m2.insert(make_pair(p,team1[p]));
                cout<<"team 2 -->>"<<" power = "<<p<<"   quantity = "<<team2[p]<<endl;
            }



            while(team1[p]){
                team1[p]--;
                team11[i] = p;
                i++;
            }

            while(team2[p]){
                team2[p]--;
                team22[j] = p;
                j++;

            }

        }
        */

        /*  first Logic for counting
        j=0;
        cont=0;
        for(i=0;i<n;i++){

                while(team11[i]<team22[j]){
                    i++;

                    if(i==n-1){
                        break;
                    }
                }

                if(team11[i]>team22[j]){
                    j++;
                    cont++;
                }


        }
        */





        cout<<cont<<endl;

    }
    return 0;
}


/* Testing new logic

#include<bits/stdc++.h>

using namespace std;

int main(){
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

                while(team1[i]<team2[j]){
                    i++;

                    if(i==team1.size()-1){
                        break;
                    }
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

*/
