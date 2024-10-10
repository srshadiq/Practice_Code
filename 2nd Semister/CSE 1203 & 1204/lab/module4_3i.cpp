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
        void sum()
        {
            int ax=getData();
            cout<<"Sum= "<< ax+bx<<endl;
        }
        ~B(){
            cout<<"Inside destractor B"<<endl;
        }
} ;
int main(){ 
    B b;
    b.sum();
 
return 0; 
}