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
class B{ 
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
class C:public A,public B{ 
    private:
        int cx;
    public:
        C(){
            cout<<"Inside constractor C"<<endl;
            cx=30;
        }
        void sum()
        {
            int x=getData();
            int y=getDataB();
            cout<<"Sum= "<< x+y+cx<<endl;
        }
        ~C(){
            cout<<"Inside destractor C"<<endl;
        }
};

int main(){ 
    C c;
    c.sum();
 
return 0; 
}