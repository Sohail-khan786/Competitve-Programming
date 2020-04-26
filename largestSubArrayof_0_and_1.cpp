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
        long long int n,x,temp,i=0,currentSum,longestSoFar,currentLong;
        vector<long long int> v,summ;
        unordered_map<long long int,long long int> m;

        m.clear();
        v.clear();
        n=0;
        x=0;
        temp=0;
        i=0;
        summ.clear();
        currentSum=0;
        longestSoFar=0;
        currentLong=0;

        cin>>n;

        temp=n;
        i=0;
        summ.push_back(0);
        m[0]=-1;
        while(temp--){
            cin>>x;
            if(x==0)
                v.push_back(-1);
            else
            {
                v.push_back(1);
            }
            currentSum = currentSum + v[i];
            summ.push_back(currentSum);

            if(m.find(currentSum)!=m.end()){
                currentLong = i - m[currentSum];

                if(currentLong>longestSoFar){
                    longestSoFar = currentLong;
                }
            }
            else{
                m[currentSum]=i;
            }

            i++;
        }

        cout<<longestSoFar<<"\n";

    }


	return 0;
}