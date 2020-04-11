#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,cb,co,i,cd,fg=0,cx;
    string s1,s2;

    cin>>t;

    while(t--)
    {
        cb=0;
        co=0;
        cd=0;
        i=0;
        fg=0;
        cx=0;

        cin>>s1>>s2;

        while(s1[i])
        {
         if(s1[i]=='b' && s2[i]=='b')
            cb++;
         else if(s1[i]=='b')
            cb++;
         else if(s2[i]=='b')
            cb++;

        if(s1[i]=='o' && s2[i]=='o')
            co++;
        else if(s1[i]=='o')
            co++;
         else if(s2[i]=='o')
            co++;

        if(s1[i] == 'b' && s2[i] == 'o')
            cd++;

        if(s2[i] == 'b' && s1[i] == 'o')
            cd++;

        if((s1[i]!='b' && s1[i]!='o') && (s2[i]!='b' && s2[i]!='o') )
            cx++;

         /*if(cb==2 && co>0 && cd==0)
         {
            cout<<"yes"<<endl;
            fg=1;
         }
         else if(cb>2 && co>0)
         {
            cout<<"yes"<<endl;
            fg=1;
         }
         else if(cb>2 && co>2)
         {
            cout<<"yes"<<endl;
            fg=1;
         }
          */

        //logic
        if(cx>0)
        {
         break;
        }
        else if(cb>2 && co>0)
        {
            cout<<"yes"<<endl;
            fg=1;
         }
        else if(cb==2 && co==1 && cd==0)
        {
            cout<<"yes"<<endl;
            fg=1;
         }
        else if(cb==2 && co==2 && cd<=1)
        {
            cout<<"yes"<<endl;
            fg=1;
         }
         else if(cb==2 && co>2)
        {
            cout<<"yes"<<endl;
            fg=1;
         }


         i++;
        }


          if(fg==0)
          cout<<"no"<<endl;



    }
    return 0;
}
