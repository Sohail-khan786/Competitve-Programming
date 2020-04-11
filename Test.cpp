#include<iostream>

using namespace std;

int main()
{
char ch;
int a[10],i=1,x;
while(i<=5)
{
if(i!=5)
cin>>x>>ch;          // to take comma separated inout
else
cin>>x;
a[i]=x;
i++;
}
for(i=1;i<=5;i++){
    cout<<a[i]<<endl;
}
return 0;
}
