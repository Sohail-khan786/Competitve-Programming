#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,i,cont,mul=1;

    cin>>a>>b;

    c = __gcd(a,b);

    i=2;

    while(c!=1)
    {
        cont = 0;

        while(c%i==0)
        {
            c = c/i;
            cont++;
        }

        if(cont)
        {
            mul = mul * (cont+1);
        }

        i++;
    }

    cout<<mul<<endl;

    return 0;
}
