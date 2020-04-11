#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,d;
    double sum;
    vector<int> v;
    vector<int>::iterator it;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>d;
            v.push_back(d);
        }
    sort(v.begin(),v.end());
    it=v.begin();
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
            sum = sum + ((*(it)*1.0)/pow(2,i-1));
            break;
        }
        sum = sum + ((*(it)*1.0)/pow(2,i));
        it++;
    }
    cout<<fixed<<setprecision(8)<<sum<<endl;
    v.clear();
    }
    return 0;
}
