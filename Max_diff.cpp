#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,t,n,k;
    long int sum1,sum2,sum3,sum4;
    cin>>t;
    while(t--)
    {
        sum1=0;
        sum2=0;
        sum3=0;
        sum4=0;
        cin>>n>>k;
        long int w[n];
        for(i=0;i<n;i++)
            cin>>w[i];

        sort(w,w+n);

        for(i=0;i<k;i++)
            sum1=sum1+w[i];
        for(i=k;i<n;i++)
            sum2=sum2+w[i];
        for(i=0;i<n-k;i++)
            sum3=sum3+w[i];
        for(i;i<n;i++)
            sum4=sum4+w[i];
        sum1=abs(sum1-sum2);
        sum3=abs(sum3-sum4);
        if(sum1>sum3)
            cout<<sum1<<endl;
        else
            cout<<sum3<<endl;


    }
return 0;
}
