#include<bits/stdc++.h>
using namespace std;

class Department{
    protected:
        string nameDept51;
        double totalStudent51;
        int totalTeacher51;
    public:
        Department(){};
        Department(string Dept51,int totalS51,int totalT51)
        {
            nameDept51=Dept51;
            totalTeacher51=totalS51;
            totalStudent51=totalT51;
        }
        virtual void equipment_Index()=0;
        void Display()
        {
            cout<<"Name of the Department: "<<nameDept51<<endl;
            cout<<"Total Students: "<<totalStudent51<<endl;
            cout<<"Total Teachers: "<<totalTeacher51<<endl;
        }
};
class EEE:public Department{
    private:
        int noOfComp51;
    public:
        EEE(){}
        EEE(string s51,int x51,int y51,int z51):Department(s51,x51,y51){noOfComp51=z51;}
        void equipment_Index()
        {
            try
            {
                if(totalStudent51==0)
                {
                    throw(1);
                }
            }
            catch(int f51)
            {
                if(f51==1)
                {
                    cout<<"Error "<<endl;
                }                   
            }
            cout<<"Index Of EEE Department: "<<(float)noOfComp51/(float)totalStudent51<<endl;
        }
        void Display()
        {
            cout<<"EEE DEaprtment"<<endl;
            Department::Display();
            cout<<"No of Machine: "<<noOfComp51<<endl;
            equipment_Index();
        }
        int Total()
        {
            return noOfComp51;
        }
};
class CSE:public Department{
    private:
        int noOfMech51;
    public:
        CSE(){}
        CSE(string s51,int x51,int y51,int z51):Department(s51,x51,y51){noOfMech51=z51;}
        void equipment_Index()
        {
            try
            {
                if(totalStudent51==0)
                {
                    throw(1);
                }
            }
            catch(int f51)
            {
                if(f51==1)
                {
                    cout<<"Error "<<endl;
                }                   
            }
            cout<<"Index Of EEE Department: "<<noOfMech51/totalStudent51<<endl;
        }
        void Display()
        {
            cout<<"CSE DEaprtment"<<endl;
            Department::Display();
            cout<<"No of Computer: "<<noOfMech51<<endl;
            equipment_Index();
        }
        int Total()
        {
            return noOfMech51;
        }
};
class ECE:public Department{
    private:
        int noOfMech51;
        int noOfComp51;
    public:
        ECE(){}
        ECE(string s51,int x51,int y51,int z51,int k51):Department(s51,x51,y51){noOfMech51=z51,noOfComp51=k51;}
        void equipment_Index()
        {
            try
            {
                if(totalStudent51==0)
                {
                    throw(1);
                }
            }
            catch(int f51)
            {
                if(f51==1)
                {
                    cout<<"Error "<<endl;
                }                   
            }
            cout<<"Index Of ECE Department: "<<(noOfMech51+noOfComp51)/totalStudent51<<endl;
        }
        void Display()
        {
            cout<<"ECE DEaprtment"<<endl;
            Department::Display();
            cout<<"No of Machine and Computer: "<<noOfMech51+noOfComp51<<endl;
            equipment_Index();
        }
        int Total()
        {
            return noOfMech51+noOfComp51;
        }
};
int main()
{
    EEE eee("EEE",50,1000,50);
    CSE cse("CSE",30,1200,200);
    ECE ece("ECE",30,0,25,100);
    eee.Display();
    cse.Display();
    ece.Display();
    cout<<"Total Equipment: "<<cse.Total()+eee.Total()+ece.Total()<<endl;
    cout<<"End of program"<<endl;

    return 0;
}