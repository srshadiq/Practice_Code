#include<bits/stdc++.h>
using namespace std;

class Test
{
    public:
        int sum(int a)
        {
            return a;
        }
        int sum(int a,int b)
        {
            return a+b;
        }
        double sum(double a,int b)
        {
            return a+b;
        }
        double sum(int a,double b)
        {
            return a+b;
        }
        double sum(double a,double b)
        {
            return a+b;
        }
        
};
int main()
{
    Test t;
    cout << t.sum(10)<<endl; //returns 10
    cout << t.sum(10,20)<<endl; //return 30
    cout << t.sum(5.7,20)<<endl; //return 25.7
    cout << t.sum(10,2.6)<<endl; //return 12.6
    cout << t.sum(10.5,20.7)<<endl; //return 21.2
    return 0;
}