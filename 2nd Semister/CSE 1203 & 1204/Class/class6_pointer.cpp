#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        virtual void show()
        {
            cout <<"Inside show function A"<<endl;
        }
};
class B: public A{
    public:
        void show()
        {
            cout <<"Inside show function B"<<endl;
        }
};
int main()
{
    A a;    
    A *pa;
    pa=&a;
    pa->show();
    cout <<"For class B"<<endl;
    B b;
    B *pb;
    pa=&b;
    pa->show();//static 

    return 0;
}
