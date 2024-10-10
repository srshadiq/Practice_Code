// topic-1
#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
class Stack
{
private:
    stack<int> ax, bx;

public:
    void Push(int x)
    {
        ax.push(x);
    }
    int Pop()
    {
        ax.pop();
    }
    void Display()
    {
        bx=ax;
        system("cls");
        cout << "current stack is: ";
        while (!bx.empty())
        {
            cout << bx.top()<<' ';
            bx.pop();
        }
        cout << endl;
        getch();
    }
};
int menu()
{
    system("cls");
    int op;
    cout << "**** Stack Menu ****\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Display\n";
    cout << "4. Exit\n";
    cout << "  Enter your choice: ";
    cin >> op;
    return op;
    getch();
}
int main()
{
    Stack s;
    
    for (;;)
    {
        int x;
        x = menu();
        if (x == 4)
        {
            break;
        }
        else if(x==1){
            int p;
            cout<<"Enter the element: ";
            cin>>p;
            s.Push(p);
        }
        else if(x==2){
            cout<<"The element was poped: "<<s.Pop()<<endl;
        }
        else if(x==3){
            s.Display();
        }
    }
    return 0;
}
