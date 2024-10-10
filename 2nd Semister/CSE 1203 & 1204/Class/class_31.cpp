#include<bits/stdc++.h>
using namespace std;
class test{
    int n=0;
    int id;
    static int m;
    public:
        test(int x)
        {
            id=x;
            m++;
            cout<<"constractor is caslled..."<<endl;
        }
        void show()
        {
            cout <<"Id="<<id<<" ";
            // cout <<"dept="<<m <<endl;
        }
        int static getM()
        {
            return m;
        }
        test(test &p)
        {
            this->id=p.id;
            // id=p.id;
        }
        ~test()
        {
            cout <<"Destractor is called..."<<endl;
        }
};
int test::m=0;
int main()
{
    test t(1),s(2),w(3);
    t.show();
    s.show();
    w.show();
    test s1(t);
    s1.show();
    cout <<"Total student= "<< t.getM() << endl;
    return 0;
}
