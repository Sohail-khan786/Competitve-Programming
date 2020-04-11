#include <bits/stdc++.h>
using namespace std;
int main()
{
 int i,n;
 int arr[10];
 cin>>n;
 for(i=0;i<n;i++)
    cin>>arr[i];
 sort(arr,arr+n);
 for(i=0;i<n;i++)
    cout<<arr[i]<<"\t";
return 0;
}
