#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num1,num2,quotient=1,remainder=1;

    cout<<"enter two numbers";
    cin>>num1>>num2;


    while(remainder!=0)
    {
       cout<<" Num1 is "<<num1<<endl;
       cout<<" NUm2 is "<<num2<<endl;

      quotient = num1/num2;
      cout<<" quotient is "<<quotient<<endl;


      remainder = num1 - num2*quotient;
      cout<<" Remainder is "<<remainder<<endl;

      cout<<endl;
      cout<<endl;

      if(remainder)
      {
      num1 = num2;
      num2 = remainder;
      }
    }


    cout<<" the GCD is "<<num2<<endl;

   return 0;
}
