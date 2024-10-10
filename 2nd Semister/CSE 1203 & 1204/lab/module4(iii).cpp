#include<bits/stdc++.h>
using namespace std;
class A{
 private:
 int ax=5;
public:
    A()
    {
        ax=5;
        cout <<"Inside A constructor"<<endl;
    }
    ~A()
    {
        cout <<"Destractor A"<<endl;
    }

 } ;
class B:public A{
 private:
 int bx;
public:
    B()
    {
        bx=4;
        cout <<"Inside B constructor"<<endl;
        // cout <<ax+bx<<endl;
    }
    ~B()
    {
        cout <<"Destractor B"<<endl;
    }

} ;
int main(){
B b;

return 0;
}
