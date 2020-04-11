#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cn=0,x1,x2,x3,y1,y2,y3;
    float a,b,c;
    cin>>n;
    while(n--)
    {
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=pow(x2-x1,2)+pow(y2-y1,2);
    b=pow(x3-x2,2)+pow(y3-y2,2);
    c=pow(x3-x1,2)+pow(y3-y1,2);
     if(c>=a && c>=b)
     {
      if(c==a+b)
      cn++;
     }
     else if(a>=c && a>=b)
     {
      if(a==b+c)
      cn++;
     }
     else if(b>=a && b>=c)
     {
      if(b==a+c)
      cn++;
     }

    }
    cout<<cn<<endl;
    return 0;
}
