#include<bits/stdc++.h>

using namespace std;

int main()
{
    int flag=1;
    set<int> s;
    set<int>::iterator it;
    int x;

    while(flag!=3)
    {
        cout<<"1.Insert 2.Delete 3.Exit"<<endl;
        cin>>flag;

        cout<<"value\t";
        cin>>x;

      if(flag==1)
      {
        s.insert(x);
      }
      else if(flag==2)
      {
      s.erase(x);
      }

    cout<<"Extracting max n min from a set"<<cout<<endl;
    //s.end has iterator to last element of the set which is the size of the set and hence decrement it by one to get the maximum element present in the set;
      it = s.end();
      it--;

      cout<<"maxx = "<<*(it)<<"  minn ="<<*s.begin();
      cout<<endl;
    }
 return 0;
}
