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

};
class C:public B{
    public:
        void show()
        {
            // cout<<"x= "<<x<<endl;
            cout<<"y= "<<y<<endl;
            cout<<"z= "<<z<<endl;
            
        }
};
int main()
{
    C c;
    c.show();

    return 0;
}