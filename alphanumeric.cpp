#include<bits/stdc++.h>
using namespace std;
set<char> s;
string c;
int main()
{
    ios::sync_with_stdio(false);
    map<int,string> m;
    m[2] = "ABC";
    m[3] = "DEF";
    m[4] = "GHI";
    m[5] = "JKL";
    m[6] = "MNO";
    m[7] = "PQRS";
    m[8] = "TUV";
    m[9] = "WXYZ";
    cin >> c;
    int si = (int)c.size();
    int x,y;
    for(int i=0;i<si;i++){
        if(i == 0){
            x = c[0] - '0';
            string sp = m[x];
            s.insert(sp[0]);
        }
        else{
            x = c[i] - '0';
            y = c[i-1] - '0';
            string sp = m[x];
            s.insert(sp[0]);
            int xp = (int)sp.size();
            y = y%xp;
            if(y == 0)
                y = xp;
            s.insert(sp[y-1]);
        }
    }
    int ans = (int)s.size();
    cout << ans;

    return 0;
}
