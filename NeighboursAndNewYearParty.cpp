#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,t,n,incl,excl,excl_new,x,d,prevIncl,prevExcl;
    vector<long long int> inclList,exclList,arr;

    cin>>t;

    while(t--)
    {
        i=0;
        n=0;
        incl=0;
        excl=0;
        excl_new=0;
        x=0;
        d=0;
        prevExcl=0;
        prevIncl=0;

        arr.clear();
        inclList.clear();
        exclList.clear();

      cin>>n;

      for(i=1;i<=n;i++)
      {
        cin>>x;

        if(x>0)
            arr.push_back(x);
        else
            arr.push_back(d);
      }


      incl = arr[0];

      inclList.push_back(arr[0]);
      exclList.push_back(d);

      for(i=1;i<n;i++)
      {
            if(excl>incl)
            {
            excl_new = excl;
            }
            else
            {
            excl_new = incl;


               exclList.push_back(arr[i-1]);

            }

         incl = excl + arr[i];

         if(arr[i]>0 && i!=1)
            inclList.push_back(arr[i]);

         excl = excl_new;
      }

      if(incl==excl)
      {
        if(inclList[0]>exclList[0])
        {
          cout<<"Print Include List"<<endl;
           for(i=inclList.size()-1;i>=0;i--)
           {
             cout<<inclList[i];
           }
        }
        else
        {
            cout<<"Print Exclude List"<<endl;
          for(i=exclList.size()-1;i>=0;i--)
           {
             cout<<exclList[i];
           }
        }
      }
      else if(incl>excl)
      {
          cout<<"Print Include List"<<endl;
          for(i=inclList.size()-1;i>=0;i--)
           {
             cout<<inclList[i];
           }
      }
      else
      {
          cout<<"Print Exclude List"<<endl;
           for(i=exclList.size()-1;i>=0;i--)
           {
             cout<<exclList[i];
           }
      }
      cout<<endl;
    }
    return 0;
}
