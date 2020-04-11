#include<bits/stdc++.h>

using namespace std;

struct member
{
    string name;
    int score;
    int risk;
};

bool compareMembers(member m1 , member m2)      //in your own comparator function true->no_swap  false->swap
{


    if(m1.score != m2.score)
        return m1.score>m2.score;

    if(m1.risk != m2.risk)
        return m1.risk<m2.risk;

    return m1.name>m2.name;
}

int main()
{
    member m;
    vector<member> v;
    int t,n,i,k;

    cin>>t;
    while(t--)
    {
        n=0;
        k=0;
        v.clear();

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>m.name>>m.score>>m.risk;
            v.push_back(m);
        }

        cin>>k;

        sort(v.begin(),v.end(),compareMembers);

        cout<<v[k-1].name<<" "<<v[k-1].score<<endl;

    }
    return 0;
}
