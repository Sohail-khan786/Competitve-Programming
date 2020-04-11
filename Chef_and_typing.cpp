#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n ,sum =0,final_sum=0;
    string s1;
    map< string , int>  s;
    map< string, int> ::iterator it = s.begin();
    int flag_left = 0, flag_right= 0,flag_prev=1;

    cin>>t;

    while(t--)
    {
       cin>>n;
       final_sum=0;
       s.clear();
       s1.clear();
       sum=0;
       flag_left =0;
       flag_right = 0;
       flag_prev =1;


       for(int i = 1 ; i<=n ; i++)
       {
           s1.clear();
           sum = 0;


          cin>>s1;

          if(s.find(s1) == s.end())
          {

          int j=0;
          while(s1[j])
          {

            if(s1[j]=='d' || s1[j]=='f')
            {
               flag_left = 1;
               flag_right =0;

               if(j==0)
                 flag_prev=1;
            }
            else
            {
              flag_right = 2;
              flag_left = 0;

              if(j==0)
                flag_prev = 2;
            }

            if(flag_left)
            {
                if(flag_prev == flag_left)
                {
                        if(j!=0)
                        {
                            sum = sum + 4;
                            //cout<<"j="<<j<<" flag_left="<<flag_left<<" flag_right="<<flag_right<<" flag_prev="<<flag_prev<<" Added="<<4<<endl;
                        }
                        else
                            {
                            sum = sum + 2;
                            //cout<<"j="<<j<<" flag_left="<<flag_left<<" flag_right="<<flag_right<<" flag_prev="<<flag_prev<<" Added="<<2<<endl;
                            }
                }
                else
                {
                  sum = sum + 2;
                  //cout<<"j="<<j<<" flag_left="<<flag_left<<" flag_right="<<flag_right<<" flag_prev="<<flag_prev<<" Added="<<2<<endl;
                }

               flag_prev = 1;
            }
            else
            {

                if(flag_prev == flag_right)
                {

                       if(j!=0)
                       {
                            sum = sum + 4;
                            //cout<<"j="<<j<<" flag_left="<<flag_left<<" flag_right="<<flag_right<<" flag_prev="<<flag_prev<<" Added="<<4<<endl;
                       }
                       else
                       {
                            sum = sum + 2;
                            //cout<<"j="<<j<<" flag_left="<<flag_left<<" flag_right="<<flag_right<<" flag_prev="<<flag_prev<<" Added="<<2<<endl;
                       }
                }
                else
                {
                    sum = sum + 2;
                   // cout<<"j="<<j<<" flag_left="<<flag_left<<" flag_right="<<flag_right<<" flag_prev="<<flag_prev<<" Added="<<2<<endl;
                }

                flag_prev =2;
            }

            j++;
          }
          }

          it = s.find(s1);
          if(it != s.end())
          {
              //cout<<"adding coz  found "<<(it->second)/2<<endl;


             final_sum = final_sum + (it->second)/2;
          }
          else
          {
            //cout<<"adding coz  not found "<<sum<<endl;
            final_sum = final_sum + sum;
            s.insert(make_pair(s1,sum));
          }
       }

       cout<<final_sum<<endl;
    }
    return 0;
}
