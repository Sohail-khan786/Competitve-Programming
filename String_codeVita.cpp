#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int len= (int)s.size();
    int q;
    cin>>q;
    string fc="";
    char ch;
    long long rot;
    while(q--)
    {
        cin>>ch>>rot;
        ch = toupper(ch);
        if(rot < 0){
            if(ch == 'L')
                ch = 'R';
            else
                ch = 'L';
            rot = -rot;
        }
        rot%= len;
        if(ch=='L')
            fc+=s[rot];
        else{
            if(rot == 0)
                rot = len;
            fc+= s[len-rot];
        }
    }
    int a[100],b[100];
    memset(a,0,sizeof(a));
    for(int i=0;i<(int)fc.size();i++)
        a[fc[i]-'A']++;
    int ct = (int)fc.size();
    if(ct > len){
        cout << "NO";
        return 0;
    }
    int flag;
    for(int i=0;i<=len-ct;i++){
        flag = 1;
        memset(b,0,sizeof(b));
        for(int j=i;j<i+ct;j++)
            b[s[j]-'A']++;
        for(int j=0;j<100;j++){
            if(a[j]!=b[j]){
                flag = 0;
                break;
            }
        }
        if(flag)
            break;
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}
