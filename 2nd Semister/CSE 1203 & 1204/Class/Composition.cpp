#include<bits/stdc++.h>
using namespace std;

class BDate{
    string bd;
    public:
        void setBdate(string s)
        {
            bd=s;
        }
        string getBDate()
        {
            return bd;
        }
        ~BDate()
        {
            cout<<"BDate "<<bd<<" is destroyed"<<endl;
        }
};
class Person{
    string name;
    BDate obj;
    public:
        Person(string s)
        {
            name = s;
            obj.setBdate("25 Oct 2001");
        }
        void showData()
        {
            cout<<"Name: "<<name <<endl;
            cout<<"Date of Birth: "<<obj.getBDate()<<endl;
        }
        ~Person()
        {
            cout<<"Person "<<name <<" id destroyed"<<endl;
        }
};
int main()
{
    Person p1("Kamal");

    return 0;
}