#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,l;
    float x;
    multiset<float> s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        s.insert(x);
    }

    multiset<float>::iterator it=s.end();
    //cout<<*it<<endl;
    it--;
    l = s.size();
    for(i=0;i<l;i++)
    {
        cout<<*it<<" ";
        it--;
    }
    return 0;
}
