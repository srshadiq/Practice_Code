#include<bits/stdc++.h>
using namespace std;

class A
{
    private:
        int x=10;
    protected:
        int y=20;
    public:
        int z=30;
        A(){
            cout <<"Inside Empty Constractor A"<<endl;
        }
        A(int a)
        {
            x=a;
            cout <<"Inside Parameter Constractor A"<<endl;

        }
        int getA(){
            return x;
        }
};
class B:virtual public A{
    int x=20;
    public:
    B()
    {
        cout <<"Inside Empty constractor B"<<endl;
    }
    B(int a):A(a)
        {
            y=a;
            cout <<"Inside Parameter Constractor B"<<endl;

        }
    int getA(){
            return x;
        }
};
// class B:protected A{
//     public:
//         void display()
//         {
//             // cout <<"x="<<x<<endl;
//             cout <<"y="<<y<<endl;
//             cout <<"z="<<z<<endl;
//         }
// };
// class B:private A{
//     public:
//         void display()
//         {
//             // cout <<"x="<<x<<endl;
//             cout <<"y="<<y<<endl;
//             cout <<"z="<<z<<endl;
//         }
// };
// class C:protected B{
//     public:
//         void display()
//         {
//             // cout <<"x="<<x<<endl;
//             cout <<"y="<<y<<endl;
//             cout <<"z="<<z<<endl;
//         }
// };
// class C:public B{
//     public:
//         void display()
//         {
//             // cout <<"x="<<x<<endl;
//             cout <<"y="<<y<<endl;
//             cout <<"z="<<z<<endl;
//         }
// };

// class B{
//     int y=20;
//     public:
//     B()
//     {
//         cout <<"Inside Empty constractor B"<<endl;
//     }
//     B(int a)
//         {
//             y=a;
//             cout <<"Inside Parameter Constractor B"<<endl;

//         }
//         void display()
//         {

//             // // cout <<"x="<<x<<endl;
//             // cout <<"y="<<y<<endl;
//             // cout <<"z="<<z<<endl;
//         }
// };
class C:virtual public A
{
    int x=30;
    public:
    C()
    {
        cout <<"Inside Enpty constractor C"<<endl;
    }
    int getA(){
            return x;
        }
};
class D:public B,public C
{

};
int main()
{
    // A a;
    B b(10);
    // C c;
    D d;
    // cout<<"z="<<a.z<<endl;
    // b.display();
    // b.y=20;
    // b.z=20;
    // cout<<"x="<<d.getA()<<endl;
    cout<<"x="<<d.B::getA()<<endl;
    cout<<"x="<<d.C::getA()<<endl;

    // cout<<"z="<<c.z<<endl;

    return 0;
}
