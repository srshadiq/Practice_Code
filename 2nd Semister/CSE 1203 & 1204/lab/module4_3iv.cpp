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
class B:public A{ 
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
class C:public A{ 
    private:
        int cx;
    public:
        C(){
            cout<<"Inside constractor C"<<endl;
            cx=30;
        }
        int sum()
        {
            int x=getData();
            // int y=getDataB();
            cout<<"Sum Class A&C= "<< x+cx<<endl;
            return x+cx;
        }
        ~C(){
            cout<<"Inside destractor C"<<endl;
        }
};

int main(){ 
    B b;
    C c;
    int s=b.getDataB();
    int t=c.sum();
    cout<<"Total sum= "<<s+t<<endl;

 
return 0; 
}