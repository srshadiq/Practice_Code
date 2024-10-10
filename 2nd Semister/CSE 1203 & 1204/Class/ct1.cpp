#include<bits/stdc++.h>
using namespace std;
class A{
    private: int x=1;
    public: int y=2;
        int getx()
        {
            return x;
        }
    protected: int z=3;
};
class B:protected A{
    public:
        // cout <<y<<endl;
        A a;
        int getz()
        {
            return a.getx()+z;
        }
        
};
class C:private B{
    public:
        B b;
        int gety()
        {
            return b.getz()+y;
        }
        
};
int main()
{
    C c;
    A a;
    B b;
    cout <<c.gety()<<endl;

    return 0;
}