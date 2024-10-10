#include<bits/stdc++.h>
using namespace std;

class Complex{
    int x;
    int y;
    public:
        Complex()
        {

        }
        Complex(int a,int b)
        {
            x=a;
            y=b;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        Complex operator +(Complex c)
        {
            Complex t;
            t.x=x+c.x;
            t.y=y+c.y;
            return t;
        }

};
int main()
{
    Complex a1(2,3),a2(4,6),a3;
    a3=a1+a2;
    cout <<a3.getX()<<"+j"<<a3.getY()<<endl;
    return 0;
}