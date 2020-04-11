#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,d,temp,i;
    vector< int > indgredients , quantity;

    cin>>n;
    int t[n];

    temp=n;
    while(temp--){
        cin>>d;
        indgredients.push_back(d);
    }

    temp=n;
    for(i=0;i<n;i++){
        cin>>d;
        d = d / indgredients[i];
        t[i]=d;
        quantity.push_back(d);
    }

    temp = max_element(t,t+n);

    cout<<temp;

    return 0;
}
