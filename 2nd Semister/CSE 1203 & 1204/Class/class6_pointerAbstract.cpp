#include<bits/stdc++.h>
using namespace std;

class animal
{
    string color;
    public:
        virtual void eat()=0;//abstract class for pure virtual class
        // {
        //     cout <<"Animal food"<<endl;
        // }
        void setcolor(string c)
        {
            color=c;
        }
        string getcolor()
        {
            return color;
        }
};
class dog:public animal
{
    public:
        void eat()
        {
            cout <<"Dog food"<<endl;
        }
};
class cat:public animal
{
    public:
        void eat()
        {
            cout <<"Cat food"<<endl;
        }
};
int main()
{
    // animal a; //we canot create object in abstract class
    animal *pa;
    dog d;
    pa=&d;
    pa->eat();
    pa->setcolor("red");
    cout <<"color= "<<pa->getcolor()<<endl;
    cat c;
    pa=&c;
    pa->eat();
    pa->setcolor("white");
    cout <<"color= "<<pa->getcolor()<<endl;
    return 0;
}