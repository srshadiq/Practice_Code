#include <bits/stdc++.h>
using namespace std;
class queuee
{
public:
    int arr[15];
    int rear = 0;
    int front = 0;
    void enqueue(int x)
    {
        if (rear == 15 - 1)
        {
            rear = 0;
            if (rear == front)
            {
                printf("Queue is full.\n");
                rear = 15 - 1;
            }
            else
                arr[rear] = x;
        }
        else
        {
            if (rear + 1 == front)
                printf("Queue is full.\n");
            else
                arr[++rear] = x;
        }
    }
    void dequeue()
    {
        int x;
        if (rear == front)
            printf("Queue is empty..\n");
        else
        {
            if (front == 15 - 1)
                front = 0;
            else
                front++;
                x = arr[front];
        }
    }
    void display(){
        for (int i = front;i!=rear ; i++)
        {
            if(i==15){ i=0;}
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    queuee q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(25);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}