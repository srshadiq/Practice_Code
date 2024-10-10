#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

long total=-1;

class member{
    private:
        long long int mobile;
        string name;
        float amount;
        int pin;
        int exist=0;
    public:
        void setMobile(long long p)
        {
            mobile=p;
        }
        void setName(string s)
        {
            name=s;
        }
        void setPin(int n)
        {
            pin=n;
        }
        void Fexist(int e)
        {
            exist=e;
        }
        long long getMobile()
        {
            return mobile;
        }
        int getPin()
        {
            return pin;
        }
        void display()
        {
            cout <<"Number: "<<mobile<<endl;
            cout <<"Name: "<<name<<endl;
            cout <<"pin: "<<pin<<endl;
        }
};

class history{
    private:
        long long int mobile;
        string name;
        float amount;
        int pin;
    public:
};

member mn[100000];

int first()
{
    system("cls");
    int op;
    cout <<"*** MyCash Login**"<<endl;
    cout <<"1. Login"<<endl;
    cout <<"2. Register"<<endl;
    cout <<"3. Exit "<<endl;
    cout <<"Enter Your Option: ";
    cin >>op;
    return op;
}

int searchMobile(long long p)
{
    int idx=-1;
    for (int i = 0; i < total; i++)
    {
        if(p==mn[i].getMobile())
        {
            idx=i;
        }
        
    }
    return idx;
}
int searchPin(long long p)
{
    int idx=-1;
    for (int i = 0; i < total; i++)
    {
        if(p==mn[i].getPin())
        {
            idx=i;
        }
        
    }
    return idx;
}
int getpin()
{
    string pass="";
    char ch;
    ch=getch();
    while(ch!=13)
    {
        pass.push_back(ch);
        cout <<"*";
        ch=getch();
    }
    cout <<endl;
    return (stoi(pass));
}
void login()
{
    int pin;
    long long int phone;
    int x,y;
    cout <<"Enter phone number: ";
    cin>> phone;
    cout <<"Enter pin :";
    cin >>pin;
    x=searchMobile(phone);
    y=searchPin(pin);
    if(x>-1 && y>-1)
    {
        cout <<"Login Successfull..."<<endl;
    }
    else
    {
        cout <<"Login Invalid..."<<endl;
    }
    getch();
}
void reg()
{
    long long int member_phone;
    string member_name;
    int member_pin,x,o,q;
    cout <<"Enter Phone Number: ";
    cin>>member_phone;
    
    q=searchMobile(member_phone);
    if(q<0){
    total++;
    cout<<"Enter name: ";
    cin>>member_name;

    cout<<"Enter Pin: ";
    member_pin=getpin();

    srand(time(0));
    x=1000+rand()%9000;
    cout<<"myCash OTP: "<<x<<endl;
    // mn[total].Fexist(1);

    cout <<"Enter your OTP: ";
    cin >> o;
    if(x==o)
    {
        mn[total].setMobile(member_phone);
        mn[total].setName(member_name);
        mn[total].setPin(member_pin);
        cout <<"Registration Successful..."<<endl;
    }
    else
    {
        cout <<"Invalid OTP..."<<endl;
    }
    }
    else
    {
        cout <<"Member already exists..."<<endl;
    }
    // mn[total].display();
    getch();


}

int main()
{
    int option;
    while(1)
        {
        option=first();
        if(option==3)
        {
            cout <<"End of the program..."<<endl;
            break;
        }
        switch(option)
        {
            case 1: login(); break;
            case 2: reg(); break;
        }
        getch();
    }
    
    return 0;
}
