
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[]= {2,3,5,7,11,13,17,19};
    int count[8];
    memset(count,0,sizeof(count));
    int index=0;
    while(n>1)
    {
        if(n%a[index]==0){
            count[index]= 1;
            while(n%a[index]==0)
                n/=a[index];
        }
       // else
            index++;
    }
    int result= 1;
    for(int i=0;i<8;i++)
        if(count[i])
            result*=2;
    cout<<result-1;
    return 0;
}
