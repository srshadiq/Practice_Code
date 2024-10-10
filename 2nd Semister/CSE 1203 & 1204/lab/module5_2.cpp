#include<bits/stdc++.h>
using namespace std;

class Circuit
{
    private:
        int real;
        int img;
    public:
        Circuit()
        {

        }
        Circuit(int a,int b)
        {
            real=a;
            img=b;
        }
        Circuit operator +(Circuit const &c)
        {
            Circuit t;
            // t.real=(real * c.real + img * c.img) / ((real + c.real) * (real + c.real) + (img + c.img) * (img + c.img));
            // t.img=(img * c.real - real * c.img) / ((real + c.real) * (real + c.real) + (img + c.img) * (img + c.img));
            t.real=real+c.real;
            t.img=img+c.img;
            return t;
        }
        Circuit operator /(Circuit const &c)
        {
            Circuit t;
            t.real=((real*c.real)+(img*c.img))/((c.real*c.real)+(c.img*c.img));
            t.img=((img*c.real)-(real*c.img))/((c.real*c.real)+(c.img*c.img));
        }
        void print()
        { 
            cout<<"Current is: ";
            cout << real <<" +i("<<img<<")"<<endl;
        }
};
int main()
{
    Circuit z1(3,4),z2(4,-3),z3(0,6);
    Circuit z;
    z=z1+z2+z3;

    Circuit v(100,50);
    Circuit I;
    I=v/z;
    I.print();
    return 0;
}