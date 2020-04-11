#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,a[30]={0};
    string s;
    char ch;
    cin>>s;
    i=0;
    while(s[i])
    {
        if(s[i]>= 'a' && s[i]<='z')
        a[s[i] - 'a' + 1]++;
        else
            a[s[i] - 'A' + 1]++;

        i++;
    }

    for(i=1;i<=26;i++)
    {
        if(a[i])
        {
            ch = i + 'a' - 1;
            cout<<ch<<a[i];
        }

    }
    return 0;
}
