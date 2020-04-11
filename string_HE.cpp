#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,len=0,i,a[30]={0};
    string s;
    char ch;
    cin>>n;
    cin>>s;
    for(i=1;i<=n;i++)
    {
        ch = s[i-1];
        a[ch - 'a']++;
    }
    len = *(max_element(a,a+30));
    len = n - len;
    cout<<len<<endl;


    return 0;
}
