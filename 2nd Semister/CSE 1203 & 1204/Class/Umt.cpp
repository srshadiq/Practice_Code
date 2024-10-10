#include<bits/stdc++.h>
using namespace std;

class Employee{
    string ename;
    public:
        Employee (string s){
            ename = s;
        }
        void showName()
        {
            cout<<"Employee Name: "<<ename<<endl;
        }
        ~Employee()
        {
            cout<<"Employee "<<ename<<" is destroied"<<endl;
        }
};
class Company{
    string cname;
    Employee *emp;
    public: 
        Company(string s,Employee *e)
        {
            cname=s;
            emp=e;
        }
        void showData()
        {
            cout<<"Company: "<< cname<<endl;
            emp->showName();
        }
        ~Company()
        {
            cout<<"Company "<<cname<<" is destroyed"<<endl;
        }
};
int main()
{
    Employee  e1("Kamal");
    e1.showName();
    {
        cout<<"-----Block starts------"<<endl;
        Company c1("HP ",&e1);
        c1.showData();
    }
    cout<<"-----After Block------"<<endl;

    e1.showName();

    return 0;
}