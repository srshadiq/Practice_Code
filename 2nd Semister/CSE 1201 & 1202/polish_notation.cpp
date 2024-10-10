#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Polish
{
    int stack[20];
    int top = -1;

public:
    void push(int x)
    {
        stack[++top] = x;
    }
    int pop()
    {
        return stack[top--];
    }
    void PostFix(char *e)
    {
        int n1, n2, n3, num;
        while (*e != '\0')
        {
            if (isdigit(*e))
            {           
                num = *e - 48;
                push(num);
            }
            else
            {
                n1 = pop();
                n2 = pop();
                switch (*e)
                {
                case '+':
                    n3 = n1 + n2;
                    break;
                case '-':
                    n3 = n2 - n1;
                    break;
                case '*':
                    n3 = n1 * n2;
                    break;
                case '/':
                    n3 = n2 / n1;
                    break;
                }
                push(n3);
            }
            e++;
        }
        cout << " = " << pop();
    }
    void prefix(char *e){
        int n1, n2, n3, num;
        char *a;
        a=e;
        while(*(e+1)!='\0') e++;
        while(e>=a){
            if (isdigit(*e))
            {           
                num = *e - 48;
                push(num);
            }
            else{
                n1=pop();
                n2=pop();
                switch (*e)
                {
                case '+':
                    n3 = n1 + n2;
                    break;
                case '-':
                    n3 = n1 - n2;
                    break;
                case '*':
                    n3 = n1 * n2;
                    break;
                case '/':
                    n3 = n1 / n2;
                    break;
                }
                push(n3);
            }
            e--;
        } 
        cout << " = " << pop();     
    }
};
int main()
{
    Polish p;
    char exp1[20],exp2[20];
    
    cout << "Enter the prefix expression :: ";
    cin >> exp1;
    cout << "\nThe result of expression " << exp1;
    p.prefix(exp1);

    cout << "Enter the postfix expression :: ";
    cin >> exp2;
    cout << "\nThe result of expression " << exp2;
    p.prefix(exp2);

    return 0;
}