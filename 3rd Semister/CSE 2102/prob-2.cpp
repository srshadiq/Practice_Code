#include<bits/stdc++.h>
using namespace std;

int Priority(char c)
{
    if (c == '^')
        return 3;

    else if (c == '*' || c == '/')
        return 2;

    else if (c == '+' || c == '-')
        return 1;

    else
        return 0;
}
int check(string s)
{
    int x=0,y=0,z=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='(')
            x++;

        else if(s[i]==')')
            y++;

        if(Priority(s[i])!=0 && Priority(s[i+1])!=0 )
            z++;   
    }
    if(x!=y ||z>0)
        return 0;
    else
        return 1;
    
}

string InfixToPostfix(string infix)
{
    string postfix="";
    stack<int>s;
    for (int i = 0; i < infix.length(); i++)
    {
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z'||infix[i]>='0'&& infix[i]<='9')          
        {
            postfix += infix[i];  
        }
        else if(infix[i]=='(')
        {
            s.push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while(s.top()!='('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        else            
        {
            while (!s.empty() && Priority(infix[i]) <= Priority(s.top())){
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }
    return postfix;
    
}
int Value(string postfix)
{
    stack<int> st;
    int x1,x2,r=0 ;
    for(int i=0;postfix[i]!='\0';i++)
    {
        if(isdigit(postfix[i]))
        { 
            st.push(postfix[i]-'0');
        }
        else{
            x2=st.top();
            st.pop();
            x1=st.top();
            st.pop();
            switch(postfix[i])
            {
                case '+':r=x1+x2; break;
                case '-':r=x1-x2; break;
                case '*':r=x1*x2; break;
                case '/':r=x1/x2; break;
            }
            st.push(r);
        }
    }
    return st.top();
}
int main()
{
    string infix,postfix;
    cin>>infix;
    if(!check(infix))
        cout<<"The Expression is not valid"<<endl;
    else{
        postfix=InfixToPostfix(infix);
        cout<<"Postfix: "<<postfix<<endl;
        cout<<"Answer: "<<Value(postfix)<<endl;
    }


    return 0;
}