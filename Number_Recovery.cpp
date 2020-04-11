#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,i,d1,d2,code,id,x;
    vector<int> a,d;
    set<int> s;

    cin>>n>>q;

    for(i=1;i<=n;i++)
    {
        cin>>d1>>d2;
        a.push_back(d1);
        d.push_back(d2);
    }

    while(q--)
    {
        cin>>code>>id;

        if(code==1)
        {
            x = a[id-1] + d[id-1];

            if(x>=0)
            s.insert(x);

            x = a[id-1] - d[id-1];

            if(x>=0)
            s.insert(x);

            cout<<s.size();

            set<int>::iterator it = s.begin();

            for(i=1;i<=s.size();i++){
                cout<<" "<<*it;
                it++;
            }

            cout<<endl;
            s.clear();
        }
        else if(code == 2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
