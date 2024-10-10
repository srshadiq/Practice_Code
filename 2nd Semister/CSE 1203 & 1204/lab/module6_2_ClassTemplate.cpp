#include<bits/stdc++.h>
using namespace std;

template<class T,class D,class F>
class A
{
    private:
        T x;
        D y;
    public:
        void setData(T x,D y)
        { 
            this->x=x; 
            this->y=y; 
        } 
        F Sum()
        { 
            F s; 
            s=x+y; 
            return s; 
        } 
};
int main()
{
    A<int,int,int> a1;
    a1.setData(2,5);
    cout<<"Sum="<<a1.Sum()<<endl;
    A<int,double,double> a2;
    a2.setData(11,5.5);
    cout<<"Sum="<<a2.Sum()<<endl;
    A<double,int,double> a3;
    a3.setData(5.5,5);
    cout<<"Sum="<<a3.Sum()<<endl;
    A<double,double,double> a4;
    a4.setData(10.5,5.57);
    cout<<"Sum="<<a4.Sum()<<endl;
    return 0;
}