    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        long long int t,n,k,x,sum=0,i,mx,mn,diff,p,len,q;
        vector<long long int> a;
        cin>>t;

        while(t--)
        {
            sum=0;
            q=0;
            mx=0;
            mn=1e8;
            diff =0;
            a.clear();


            cin>>n>>k>>x;


            for(i=1;i<=k;i++){
                cin>>p;
                a.push_back(p);
                sum = sum + a[i-1];
            }

            sort(a.begin(),a.end());



            mx = *(a.end()-1);
            mn = *(a.begin());

            diff = mx - mn;

            if(n==k)
            {
                cout<<sum<<endl;
            }
            else
            {
                k = n - k;
                 if(diff == x)
                 {

                  len = a.size();
                  for(i=len ; i>=2 ; i--)
                  {
                      q = a[i-1] - a[i-2];
                      if(q > 1)
                      {
                          q--;

                          if(k-q>=0)
                          {
                          k = k - q;
                          sum = sum + (q*(a[i-1]-1) - ((q-1)*q)/2 );
                          }
                          else
                          {
                              q=k;
                              k =0;
                              sum = sum + (q*(a[i-1]-1) - ((q-1)*q)/2 );
                          }

                      if(k==0)
                        break;
                   }


                 }
                 }
                 else
                 {
                     mx = mn + x;
                     mx++;
                     a.push_back(mx);
                     len = a.size();
                  for(i=len ; i>=2 ; i--)
                  {
                      q = a[i-1] - a[i-2];
                      if(q > 1)
                      {
                          q--;

                          if(k-q>=0)
                          {
                          k = k - q;
                          sum = sum + (q*(a[i-1]-1) - ((q-1)*q)/2 );
                          }
                          else
                          {
                              q=k;
                              k =0;
                              sum = sum + (q*(a[i-1]-1) - ((q-1)*q)/2 );
                          }

                      if(k==0)
                        break;
                   }


                 }
                 }

               cout<<sum<<endl;
            }

        }


        return 0;
    }
