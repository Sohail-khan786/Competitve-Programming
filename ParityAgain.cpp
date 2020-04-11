#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,q,x,sett[10005],e,o,i,flag,digit,cont=0,temp;
    vector<long long int> v,p;

    cin>>t;

    while(t--)
    {
       fill(sett,sett+10005,0);
       e=0;
       o=0;
       v.clear();
       p.clear();
       flag=1;
       cont=0;
       digit=0;
       temp=0;



       cin>>q;

       while(q--)
       {
         cin>>x;

         if(flag)
          {
            v.push_back(x);
            sett[x]=1;
            flag=0;

            cont = 0;
            temp = x;
            while(temp)
            {
              temp = temp & (temp-1);
              cont++;
            }


            if(cont%2==0)
                e++;
            else
                o++;

          }
          else
          {
            p.clear();

            if(sett[x]==0)
            {
              sett[x]=1;
              v.push_back(x);

              cont=0;
                    temp = x;
                    while(temp)
                    {
                      temp = temp & (temp - 1);
                      cont++;
                    }

                    if(cont%2==0)
                        e++;
                    else
                        o++;


            }

            for(i=0;i<v.size();i++)
            {
               if(v[i]!=x)
               {
                  digit = (v[i] | x) & ((~v[i]) | (~x));

                  if(sett[digit]==0)
                  {
                    sett[digit]=1;
                    p.push_back(digit);


                    cont=0;
                    temp = digit;
                    while(temp)
                    {
                      temp = temp & (temp - 1);
                      cont++;
                    }

                    if(cont%2==0)
                        e++;
                    else
                        o++;
                  }
               }
            }




            for(i=0;i<p.size();i++)
            {
               v.push_back(p[i]);
            }


          }
          //tp  remove after use
            o = v.size() - e;


        cout<<e<<" "<<o<<endl;
           /*
           cout<<"Even = "<<e<<endl;
           cout<<"odd ="<<o<<endl;

           for(i=0;i<v.size();i++)
           {
              cout<<v[i]<<" ";
           }
           cout<<endl;
           */
       }


    }


 return  0;
}
