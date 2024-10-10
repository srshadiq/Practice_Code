#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int x;
    public:
        friend int add(A);
 //Prototype of friend functions
};
int add(A y)
{
    y.x=10;
    return y.x;
}
int IncX(A y)
{
    
}
int main(){
//call these methods
}
int main()
{
    A a;
    cout<<add(a)<<endl;

    return 0;
}