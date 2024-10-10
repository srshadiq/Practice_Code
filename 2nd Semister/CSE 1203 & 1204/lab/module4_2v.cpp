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
class B:public virtual A{
};
class C:public virtual A{
};
class D:public B,public C{
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
   D d;
   d.show();
    return 0;
}