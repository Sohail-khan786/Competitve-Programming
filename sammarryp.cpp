#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+2][m+2];
    for(int i=0;i<n+2;i++)
        for(int j=0;j<m+2;j++)
            a[i][j] = 0;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];

    int bi=-1,bj=-1, maxcount= 0, bd=1e9, poly=0, polycount=0;
    int count;
    a[1][1]=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
                //cout<<"considering i= "<<i<<" and j= "<<j<<'\n';
            if(i==1&&j==1)
                continue;
            if(!a[i][j])
                continue;
            count= 0;
            if(a[i][j+1]==1) count++;
            if(a[i][j-1]==1) count++;
            if(a[i+1][j]==1) count++;
            if(a[i-1][j]==1) count++;
            if(a[i+1][j+1]==1) count++;
            if(a[i+1][j-1]==1) count++;
            if(a[i-1][j+1]==1) count++;
            if(a[i-1][j-1]==1) count++;


           // cout<<"count is "<<count<<'\n';
           // cout<<"max count is "<<maxcount<<'\n';

            if(count==0)
                continue;

            if(count>maxcount){
                maxcount= count;
                bi= i;
                bj= j;
                bd= max(i,j)-1;
               // cout<<"best distance = "<<bd<<'\n';
            }
            else if(count== maxcount){
                int temp= max(i,j)-1;
               // cout<<"temp= "<<temp<<'\n';
               // cout<<"best distance = "<<bd<<'\n';
                if(bd>temp){
                    bd= temp;
                    bi= i;
                    bj= j;
                }
                else if(bd==temp){
                    poly= 1;
                    polycount= bd;
                }
            }

        }

    if(poly==1 && polycount==bd)
        cout<<"Polygamy not allowed";

    else if(maxcount==0)
        cout<<"No suitable girl found";
    else
        cout<<bi<<':'<<bj<<':'<<maxcount;

    return 0;

}
