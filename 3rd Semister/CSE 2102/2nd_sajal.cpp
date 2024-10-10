#include <bits/stdc++.h>
using namespace std;
int Ope(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string InfixToPostfix(string s)
{
    stack<char> c;
    string postFix;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            postFix = postFix + s[i];
        }
        else if (s[i] == '(')
        {
            c.push('(');
        }
        else if (s[i] == ')')
        {
            while (c.top() != '(')
            {
                postFix = postFix + c.top();
                c.pop();
            }
            c.pop();
        }
        else
        {
            while (!c.empty() && Ope(s[i]) <= Ope(c.top()))
            {
                postFix = postFix + c.top();
                c.pop();
            }
            c.push(s[i]);
        }
    }
    while (!c.empty())
    {
        postFix = postFix + c.top();
        c.pop();
    }
    return postFix;
}
int CheckExp(string s){
    int d=0,k=0,m=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            d++;
        }
        else if(s[i]==')'){
            k++;
        }
        if(Ope(s[i])!=-1 && Ope(s[i+1])!=-1){
            m++;
        }
    }
    if(d!=k || m>0){
        return 0;
    }
    else{
        return 1;
    }
}
int Solve(string s){
    stack<int> st;
    int num,n1,n2,n3;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            num=s[i]-48;
            st.push(num);
        }
        else{
            n1=st.top();
            st.pop();
            n2=st.top();
            st.pop();
            if(s[i]=='+')
            n3=n1+n2;
            else if(s[i]=='-')
            n3=n2-n1;
            else if(s[i]=='*')
            n3=n2*n1;
            else if(s[i]=='/')
            n3=n2/n1;
            else if(s[i]=='^')
            n3=pow(n1,n2);
            st.push(n3);
        }
    }
    return st.top();
}
int main()
{
    string exp,exp1;
    cin>>exp;
    int x=CheckExp(exp);
    if(x==0){
        cout<<"Invalid Expression"<<endl;
    }
    else{
        exp1=InfixToPostfix(exp);
        cout<<"Answer is: "<<Solve(exp1);
    }
    return 0;
}