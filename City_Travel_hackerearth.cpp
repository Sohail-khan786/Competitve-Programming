#include<bits/stdc++.h>

using namespace std;


int main()
{
    int i,s,x,n,t,y,days,rem,miles_ran,cont;

    vector< pair<int,int> > odd;

    cin>>s>>x>>n;

    odd.push_back(make_pair(0,0));

    for(i=1;i<=n;i++)
    {
        cin>>t>>y;

        odd.push_back(make_pair(t,y));
    }

    sort(odd.begin(),odd.end());

    vector<pair<int,int> >::iterator it = odd.begin();
    it++;
    miles_ran =0;
    cont=0;

    for(i=2;i<=odd.size();i++)
    {


        days = it->first - (it-1)->first - 1;

        if(s >= days*x)
        {
            s = s - days*x;
            cont = cont + days;
            if(s)
            {
                s = s - it->second;

                if(s<=0)
                {
                    cont++;
                    cout<<cont<<endl;
                    return 0;
                }
                else
                {
                    cont++;
                }
            }

        }
        else
        {
            cont = cont + s/x;
            s = s%x;

            if(s)
            {
                cont++;
                cout<<cont<<endl;
                return 0;
            }
            else
            {
                cout<<cont<<endl;
                return 0;
            }
        }
        it++;
    }

     cont = cont + s/x;
            s = s%x;

            if(s)
            {
                cont++;
                cout<<cont<<endl;
                return 0;
            }
            else
            {
                cout<<cont<<endl;
                return 0;
            }
    return 0;
}
