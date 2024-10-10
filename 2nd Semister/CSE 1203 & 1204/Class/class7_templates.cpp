#include<bits/stdc++.h>
using namespace std;

template<class T,class D>
class A
{
    T x;
    D y;
    public:
        void setData(T a,D b)
        {
            x=a;
            y=b;
        }
        D getSum()
        {
            D s;
            s=x+y;
            return s;
        }
};
int main()
{
    // A<int> a1;
    A<int,double> a1;
    a1.setData(10,20.5);
    cout <<"sum= "<<a1.getSum()<<endl;


    return 0;
}