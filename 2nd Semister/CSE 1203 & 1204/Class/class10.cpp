#include<bits/stdc++.h>
using namespace std;
class Department{
    protected:
       string Name_of_Dept;
       double Total_Students;
       int Total_Teachers;
    public:
        Department(){}
        Department(string x, int y, int z){
            Name_of_Dept = x;
            Total_Students = z;
            Total_Teachers = y;
        }
        virtual void equipment_Index() = 0;
        void Display(){
            cout<<"Name Of Department : "<<Name_of_Dept<<endl;
            cout<<"Total Teachers : "<<Total_Teachers<<endl;
            cout<<"Total Students : "<<Total_Students<<endl;
        }
};
class EEE : public Department{
    private :
       int No_of_Machines;
    public:
       EEE(){}
       EEE(string x, int y, int z, int s) : Department(x,y,z){No_of_Machines = s;}
       void equipment_Index(){
        try{
            if(Total_Students==0){
                throw(1);
            }
        }catch(int flag){if(flag){cout<<"Arithmatic Error"<<endl;}}
        cout<<"Machine index : "<<No_of_Machines/Total_Students<<endl;
       }
       void Display(){
        cout<<"Name : EEE"<<endl;
        Department::Display();
        cout<<"Total Machines : "<<No_of_Machines<<endl;
        equipment_Index();
       }
       int Total(){
        return No_of_Machines;
       }
        
};
class CSE : public Department{
    private :
       int No_of_Computers;
    public:
       CSE(){}
       CSE(string x, int y, int z, int s) : Department(x,y,z){No_of_Computers = s;}
       void equipment_Index(){
        try{
            if(Total_Students==0){
                throw(1);
            }
        }catch(int flag){if(flag){cout<<"Arithmatic Error"<<endl;}}
        cout<<"Computer index : "<<No_of_Computers/Total_Students<<endl;
       }
       void Display(){
        cout<<"Name : CSE"<<endl;
        Department::Display();
        cout<<"Total Computers : "<<No_of_Computers<<endl;
        equipment_Index();
        }
        int Total(){
        return No_of_Computers;
       }
        
};
class ECE : public Department{
    private :
       int No_of_Computers;
       int No_of_Machines;
    public:
       ECE(){}
       ECE(string x, int y, int z, int s, int a) : Department(x,y,z){No_of_Computers = s;No_of_Machines = a;}
       void equipment_Index(){
        try{
            if(Total_Students==0){
                throw(1);
            }
        }catch(int flag){if(flag){cout<<"Arithmatic Error"<<endl;}}
        cout<<"Computer + machine index = "<<(No_of_Computers+No_of_Machines)/Total_Students<<endl;
       }
       void Display(){
        cout<<"Name : ECE"<<endl;
        Department::Display();
        cout<<"Total Machines : "<<No_of_Machines<<endl;
        cout<<"Total Computers : "<<No_of_Computers<<endl;
        equipment_Index();
       }
       int Total(){
        return (No_of_Computers+No_of_Machines);
       }
        
};
int main(void){
    EEE eee("EEE", 50, 1000, 50);
    CSE cse("CSE",30,1200, 200);
    ECE ece("ECE", 30, 1200, 25, 100);
    eee.Display();
    cse.Display();
    ece.Display();
    cout<<"Total equipments = "<<eee.Total()+cse.Total()+ece.Total()<<endl;
    cout<<"End of Program"<<endl;
    return 0;
}