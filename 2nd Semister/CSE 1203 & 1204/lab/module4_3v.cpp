#include<bits/stdc++.h>
using namespace std;

class A{ 
    private: 
        int ax;  
    public:
        A(){
            cout<<"Inside constractor A"<<endl;
            ax=10;
        }
        int getData(){
            return ax;
        } 
        ~A(){
            cout<<"Inside destractor A"<<endl;
        }     
};
class B:public virtual A{ 
    private: 
        int bx;  
    public:
        B(){
            cout<<"Inside constractor B"<<endl;
            bx=20;
        }
        int getDataB(){
            return bx;
        } 
        ~B(){
            cout<<"Inside destractor B"<<endl;
        }     
};
class C:public virtual A{ 
    private:
        int cx;
    public:
        C(){
            cout<<"Inside constractor C"<<endl;
            cx=30;
        }
        int getDataC()
        {
            return cx;
        }
        ~C(){
            cout<<"Inside destractor C"<<endl;
        }
};
class D:public B,public C{
    private:
        int dx;
    public:
        D(){
            cout<<"Inside constractor D"<<endl;
            dx=40;
        }
        void sum()
        {
            int x=getData();
            int y=getDataB();
            int z=getDataC();
            cout<<"Sum= "<< x+y+z+dx<<endl;
        }
        ~D(){
            cout<<"Inside destractor D"<<endl;
        }
};

int main(){ 
    D d;
    d.sum();

return 0; 
}