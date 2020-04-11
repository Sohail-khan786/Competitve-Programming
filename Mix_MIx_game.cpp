//Incomplete Logic Fault

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,s,n,p,fg,b1,b2;
    long long int z1,z2;
    set<long long int>st,x;
    set<long long int>::iterator it;

    cin>>t;
    while(t--)
    {
        s=0;
        fg=1;
        cin>>n>>z1>>z2;

        for(i=1;i<=n;i++)
        {
            cin>>x;
            st.insert(x);
        }

        it = st.begin();

    if(z1==0 || z2==0)
        cout<<"2"<<endl;

    p=n;

    while(p--)
    {

    }



    }
    return 0;
}
