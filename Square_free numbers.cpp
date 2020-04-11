# include <bits/stdc++.h>
using namespace std;

bool isSquareFree(int n)
{
    if (n % 2 == 0)
       n = n/2;

    if (n % 2 == 0)
       return false;
    for (int i = 3; i <= sqrt(n); i = i+2)
    {

        if (n % i == 0)
        {
           n = n/i;
           if (n % i == 0)
               return false;
        }
    }

    return true;
}


int main()
{
    long n;
    cin>>n;
     long i, j=1,count=0;
        long factors[10^9];

        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                factors[j]=i;
                j++;

            }
        }

        for(i=1;i<j;i++)
        {
        if (isSquareFree(factors[i]))
        count++;
        }

        cout<<count;

    return 0;
}
