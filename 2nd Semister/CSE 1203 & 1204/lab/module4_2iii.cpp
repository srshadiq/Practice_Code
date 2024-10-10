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
class B{
    private:
        int p=4;
    protected:
        int q=5;
    public: 
        int r=6;
};
class C:public A,public B{
    public:
        void show()
        {
            // cout<<"x= "<<x<<endl;
            cout<<"y= "<<y<<endl;
            cout<<"z= "<<z<<endl;
            // cout<<"p= "<<p<<endl;
            cout<<"q= "<<q<<endl;
            cout<<"r= "<<r<<endl;
        }
};
int main()
{
    C c;
    c.show();

    return 0;
}