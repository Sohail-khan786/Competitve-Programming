#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,x,sum=0,i,mx,mn,diff,p;
    set<int> s;
    vector<int> a;
    cin>>t;

    while(t--)
    {
        sum=0;
        mx=0;
        mn=1e8;
        diff =0;
        s.clear();
        a.clear();


        cin>>n>>k>>x;


        for(i=1;i<=k;i++){
            cin>>p;
            a.push_back(p);
            s.insert(a[i-1]);
            sum = sum + a[i-1];
        }



        mx = *(max_element(a.begin(),a.end()));
        mn = *(min_element(a.begin(),a.end()));

        diff = mx - mn;

        if(n==k)
        {
            cout<<sum<<endl;
        }
        else
        {
            k = n - k;
             if(diff == x)
             {
                 while(k--)
                 {
                     mx--;
                     if(s.find(mx)==s.end())
                        sum = sum + mx;
                 }


             }
             else
             {
                 mx = mn + x;
                 while(k--)
                 {
                     if(s.find(mx)==s.end())
                        sum = sum + mx;

                    mx--;
                 }
             }

        cout<<sum<<endl;
        }

    }


    return 0;
}
