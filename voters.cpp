
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int i,n1,n2,n3,lis=0;
cin>>n1>>n2>>n3;
int a[n1+n2+n3],p[n1+n2+n3];
for(i=0;i<n1+n2+n3;i++)
    cin>>a[i];
sort(a,a+(n1+n2+n3));
for(i=0;i<n1+n2+n3;i++)
{
  if(a[i]==a[i+1]  &&  p[lis-1]!=a[i])
  {
    p[lis++]=a[i];
  }
}
cout<<lis<<endl;
for(i=0;i<lis;i++)
    cout<<p[i]<<endl;

return 0;
}
