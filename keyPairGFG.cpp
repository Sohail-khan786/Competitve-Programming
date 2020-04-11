#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t,n,x,d,i,rem,flag=0;
    long long int v[100005];
    vector<long long int> a;

    cin>>t;

    while(t--){
        n=0;
        x=0;
        d=0;
        i=0;
        rem=0;
        flag=0;
        fill(v , v+100005 , 0);
        a.clear();


        cin>>n>>x;

        while(n--){
            cin>>d;
            a.push_back(d);
            v[d]++;
        }

        for(i=0;i<a.size();i++){

                if(x >= a[i]){
                    v[a[i]]--;

                    if(v[x - a[i]]){

                            //cout<<a[i]<<" "<<x-a[i]<<endl;
                            flag = 1;
                            break;
                    }

                    v[a[i]]++;

                }




        }

        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;




    }

    return 0;
}
