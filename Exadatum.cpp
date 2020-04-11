#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,x,aNum=0,bNum=0;
    string a,b;
    char op;

    cin>>a>>b>>op;



    //changing A
    for(i=0;i<a.length();i++)
    {
        if(a[i]!='0')
        {
             x = a[i] -'0';
            x = 10 - x;
             a[i] = x + '0';
           //cout<<p;
        }
    }

    //changing b
    for(i=0;i<b.length();i++)
    {
        if(b[i]!='0')
        {
             x = b[i] -'0';
            x = 10 - x;
             b[i] = x + '0';
           //cout<<p;
        }
    }

    //for string to int
    stringstream aString(a);
    stringstream bString(b);

    //cout<<a<<" "<<b<<endl;

    aString>>aNum;
    bString>>bNum;

    //cout<<aNum<<"  "<<bNum<<endl;

    if(op =='1')
    {
        x = aNum + bNum;
    }
    else
    {
        x = aNum * bNum;
    }

    cout<<x<<endl;


    return 0;
}
