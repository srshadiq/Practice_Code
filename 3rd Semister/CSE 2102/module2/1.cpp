#include<bits/stdc++.h>
using namespace std;

string Union(string a,string b){
    string result="";
    for (int i = 0; i < a.size() && b.size(); i++)
    {
        int c=(a[i]-'0')|(b[i]-'0');
        result+=(c+'0');
    }
    return result;
}
string Intersection(string a,string b){
    string result="";
    for (int i = 0; i < a.size() && b.size(); i++)
    {
        int c=(a[i]-'0')&(b[i]-'0');
        result+=(c+'0');
    }
    return result;
}
string Difference(string a,string b){
    string result="";
    for (int i = 0; i < a.size() && b.size(); i++)
    {
        int c=(a[i]-'0')&~(b[i]-'0');
        result+=(c+'0');
    }
    
    return result;
}
string SymmetricDiff(string a,string b){
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
    cout<<"A: "<<A<<endl;
    cout<<"B: "<<B<<endl;
    cout<<"A Union B: "<<Union(A,B)<<endl;
    cout<<"A Intersection B: "<<Intersection(A,B)<<endl;
    cout<<"A Difference B: "<<Difference(A,B)<<endl;
    cout<<"A SymmetricDiff B: "<<SymmetricDiff(A,B)<<endl;

    return 0;
}