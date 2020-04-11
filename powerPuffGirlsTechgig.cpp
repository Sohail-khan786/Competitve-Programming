#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,d,temp,i;
    vector< long long int > indgredients , quantity;

    cin>>n;

    temp=n;
    while(temp--){
        cin>>d;
        indgredients.push_back(d);
    }

    temp=n;
    for(i=0;i<n;i++){
        cin>>d;
        d = d / indgredients[i];
        quantity.push_back(d);
    }



    cout<<*min_element(quantity.begin(),quantity.end())<<endl;

    return 0;
}
