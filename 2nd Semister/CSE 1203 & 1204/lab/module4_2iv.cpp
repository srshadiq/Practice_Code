#include<bits/stdc++.h>
using namespace std;
class A{
    private:
        int x=1;
    protected:
        int y=2;
    public: 
        int z=3;
};
class B:public A{
    public:
        void show()
        {
            cout<<"From class B"<<endl;
            // cout<<"x= "<<x<<endl;
            cout<<"y= "<<y<<endl;
            cout<<"z= "<<z<<endl;
            
        }
};
class C:public A{
    public:
        void show()
        {
            cout<<"From class C"<<endl;
            // cout<<"x= "<<x<<endl;
            cout<<"y= "<<y<<endl;
            cout<<"z= "<<z<<endl;
            
        }
};
int main()
{
    B b;
    C c;
    b.show();
    c.show();

    return 0;
}