#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class Queue{
    private:
        queue<int> ax,bx;
    public:
        void Enqueue()
        {
            cout<<"Enter element to push: ";
            int x;
            cin>>x;
            ax.push(x);
        }

        void Dequeue()
        {
            ax.pop();
        }
        void Display()
        {
            bx=ax;
            cout<<"Front element:"<<bx.front()<<endl;
            cout<<"Rear element:"<<bx.back()<<endl;
            cout<<"Elements: ";
            while(!bx.empty())
            {
                cout<<bx.front()<<" ";
                bx.pop();
            }
        getch();
        }
    

};
int menu()
{
    system("cls");
    cout<<" **** Queue Menu ****"<<endl; 
    cout<<"1. Enqueue"<<endl;
    cout<<"2. Dequeue"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"   Enter your option: ";
    int x;
    cin>>x;
    return x;
    getch();

}
int main()
{
    Queue q;
    int op;
    for(;;)
    {
        op=menu();
        if(op==4) break;
        switch (op)
        {
            case 1:q.Enqueue();break;
            case 2:q.Dequeue();break;
            case 3:q.Display();break;
        }
    }

    return 0;
}