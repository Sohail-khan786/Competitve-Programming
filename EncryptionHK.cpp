#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {

long long int i,x,cont,jump,flag,j;
string str,answer;

cont=0;
i=0;
x=0;
//str="";
jump=0;
flag=0;
j=0;
//answer="";

for(i=0; i<s.length() ;i++)
{
    if(s[i]!=' ')
    {
        str = str + s[i];
        cont++;
    }
}

x = sqrt(str.length());

if((float)x != sqrt(str.length()))
{
    jump = x+1;
    //flag=1;
}
else
{
    jump = x;
    flag=2;
}

cout<<str<<endl;

for(i=0;i<=x;i++)
{
    j=i;

    if(flag==2)
    {
      if(i==x)
        break;
    }

    while(j<str.length())
    {
      answer = answer + str[j];
      j = j + jump;
    }

    answer = answer + " ";

}

cout<<answer;

return answer;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

