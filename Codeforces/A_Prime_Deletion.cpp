#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s1,s2;
    cin>>s1;
    for (int i = 0; i < 9; i++)
    {
      if(s1[i]=='1'||s1[i]=='7')
      {
        s2.push_back(s1[i]);
      }
    }
    if(s2[0]>s2[1])
    {
      cout<<"71"<<endl;
    }
    else
    cout<<"17"<<endl;
    
  }
  return 0;
}