#include<bits/stdc++.h>
using namespace std;

string Or(string a,string b){
    string result="";
    for (int i = 0; i < a.size() && b.size(); i++)
    {
        int c=(a[i]-'0')|(b[i]-'0');
        result+=(c+'0');
    }
    return result;
}
string And(string a,string b){
    string result="";
    for (int i = 0; i < a.size() && b.size(); i++)
    {
        int c=(a[i]-'0')&(b[i]-'0');
        result+=(c+'0');
    }
    return result;
}
string Xor(string a,string b){
    string result="";
    for (int i = 0; i < a.size() && b.size(); i++)
    {
        int c=(a[i]-'0')^(b[i]-'0');
        result+=(c+'0');
    }
    return result;
}
int main()
{
    string A,B,s="";
    cin>>A>>B;
    int l1=A.size();
    int l2=B.size();
    if(l1>l2){
        for (int i = 0; i < l1-l2; i++)
        {
            s+='0';
        }
        B=s+B;
    }
    else{
        for (int i = 0; i < l2-l1; i++)
        {
            s+='0';
        }
        A=s+A;
    }

    cout<<"A or B: "<<Or(A,B)<<endl;
    cout<<"A and B: "<<And(A,B)<<endl;
    cout<<"A xor B: "<<Xor(A,B)<<endl;

    return 0;
}