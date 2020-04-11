#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,cont,x;

    cin>>t;

    while(t--)
    {
        cin>>n;
        int a[n+5];

        fill(a,a+(n+5),0);

        cont=0;

        for(i=1;i<=n;i++)
        {
            cin>>x;

            if(x>10e5 || x>n)
            {
                cont++;
            }
            else if(a[x])
            {
                cont++;
            }
            else
            {
                a[x]=1;
            }
        }

        cout<<cont<<endl;
    }
    return 0;
}
