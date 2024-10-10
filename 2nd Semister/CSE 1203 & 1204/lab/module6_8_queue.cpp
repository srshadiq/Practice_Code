#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
queue<int> qu;
int menu()
{
    cout<<"--Stack Menu--"<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"   Enter your option: ";
    int op;
    cin>>op;
    return op;
}
class Queue{
    public:
        void Push()
        {
            cout<<"Enter Data for push: ";
            int x;
            cin>>x;
            qu.push(x);
            cout<<"Push Successfull..."<<endl;

        }
        void Pop()
        {
            qu.pop();
            if(!qu.empty())
            {
                cout<<"Pop successfull..."<<endl;
            }
            else
            {
                cout<<"Queue is empty..."<<endl;
            }
        }
        void Display(queue<int> bu)
        {
            cout<<"Front element: "<<bu.front()<<endl;
            cout<<"Back element: "<<bu.back()<<endl;
            cout<<"All elements: ";
            while(!bu.empty())
            {
                cout<<bu.front()<<" ";
                bu.pop();
            }
            cout<<endl;

        }
};
int main()
{
    Queue  q;
    int op;
    for(;;)
    {
        op=menu();
        if(op==4) break;
        switch(op)
        {
            case 1: q.Push();break;
            case 2: q.Pop();break;
            case 3: q.Display(qu);break;

        }
    }


    return 0;
}