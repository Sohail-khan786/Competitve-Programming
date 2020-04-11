#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t,n,m,d,temp,priceAllFruitsOneType[1000],flag=1,minn=0,fruitUsed[100];
    vector<long long int> fruitType,basketPrice;


    cin>>t;

    while(t--){
      fill(priceAllFruitsOneType , priceAllFruitsOneType+1000 , 0);
      fill(fruitUsed , fruitUsed + 100 , 0);
      fruitType.clear();
      basketPrice.clear();
      flag=1;
      temp=0;
      minn=100000;
      n=0;
      m=0;
      d=0;

      cin>>n>>m;

      temp = n;
      while(temp--){
        cin>>d;
        fruitUsed[d]=1;
        fruitType.push_back(d);
      }

      temp = n;
      while(temp--){
        cin>>d;
        basketPrice.push_back(d);
      }


      for(temp=0;temp<n;temp++){
        priceAllFruitsOneType[fruitType[temp]] = priceAllFruitsOneType[fruitType[temp]] + basketPrice[temp];
      }

      temp=55;
      while(temp > -1){
        if(flag && fruitUsed[temp]){
            minn = priceAllFruitsOneType[temp];
            flag=0;

            //cout<<priceAllFruitsOneType[temp]<<" <-- 1st IF"<<endl;
        }

        if(fruitUsed[temp]){
            if(minn>=priceAllFruitsOneType[temp]){
                minn = priceAllFruitsOneType[temp];
            }

            //cout<<priceAllFruitsOneType[temp]<< "<-- 2nd IF"<<endl;
        }
        temp--;
      }

      cout<<minn<<endl;



    }
    return 0;
}
