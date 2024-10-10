#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

int total=-1;
int index=-1;
int tranID=100;
class Member{
    private:
        long long int number;
        string name;
        int pin;
        bool exist;
        double balance=0.0;
    public:
        void setMobile(long long int m)
        {
            number=m;
        }
        void setName(string n)
        {
            name= n;
        }
        void setPin(int p)
        {
            pin=p;
        }
        void setExist(bool e)
        {
            exist=e;
        }
        void cashIn(double c)
        {
            balance+=c;
        }
        void cashOut(double c)
        {
            balance-=c;
        }
        long long int getMobile()
        {
            return number;
        }
        string getName()
        {
            return name;
        }
        int getPin()
        {
            return pin;
        }
        
        bool getExist()
        {
            return exist;
        }
        double getBalance()
        {
            return balance;
        }

};
Member mn[100000];

class history{
    private:
        long long int number;
        string description;
        int id;
        double amount;
        double Balance;
    public: 
        void setNumber(long long int n)
        {
            number=n;
        }
        void setTransID(int  t)
        {
            id=t;
        }
        void setDescription(string s)
        {
            description=s;
        }
        void setAmount(int a)
        {
            amount =a;
        }
        void setBalance(double b)
        {
            Balance=b;
        }
        long long int getNumber()
        {
            return number;
        }
        int getTransID()
        {
            return id;
        }
        string getDescription()
        {
            return description;
        }
        double getAmount()
        {
            return amount;
        }
        double getBalance()
        {
            return Balance;
        }

};
history hs[100000];

int first()
{
    system("cls");
    int op;
    cout<<"*** MyCash Login**"<<endl; 
    cout<<"1. Login"<<endl; 
    cout<<"2. Register"<<endl; 
    cout<<"3. Exit"<<endl; 
    cout<<"    Enter Your Option(1-3): ";
    cin>>op;
    return op;
    getch();
}

int menu()
{
    int op;
    system("cls");
    cout<<"********** MyCash Menu ********"<<endl; 
    cout<<"1. Update Me"<<endl; 
    cout<<"2. Remove Me"<<endl; 
    cout<<"3. Send Money"<<endl; 
    cout<<"4. Cash-in"<<endl;
    cout<<"5. Cash-out"<<endl; 
    cout<<"6. Pay Bill"<<endl; 
    cout<<"7. Check Balance"<<endl; 
    cout<<"8. History"<<endl; 
    cout<<"9. Logout"<<endl; 
    cout<<"   Enter Your Option (1-9): "<<endl;
    cin >>op;
    return op;
    getch();
}

void FileIn(int i)
{
    fstream fout;
        fout.open("E:\\file.txt",ios::app);
        if(fout.is_open())
        {
                fout<<mn[i].getMobile()<<endl;
                fout<<mn[i].getName()<<endl;
                fout<<mn[i].getPin()<<endl;
                fout<<mn[i].getBalance()<<endl;
                fout<<mn[i].getExist()<<endl;

        fout.close();
        }
        else
        {
            cout<<"Error..."<<endl;
        }
}

void FileOut()
{
    ifstream fin("E:\\file.txt");
        if(fin.is_open())
        {
            while (!fin.eof()) 
            {
                total++;
                long long int mobile;
                string name;
                int pin;
                double balance;
                bool exist;

                fin>> mobile;
                fin>>name;
                fin>>pin;
                fin>>balance;
                fin>>exist;

                mn[total].setMobile(mobile);
                mn[total].setName(name);
                mn[total].setPin(pin);
                mn[total].cashIn(balance);
                mn[total].setExist(exist);
            }
        fin.close();
        }

}

void UpdateFile()
{
    ofstream fout;
    fout.open("E:\\file.txt",ios::out);
    {
        if(fout.is_open())
        {
            for (int i = 0; i <= total; i++)
            {
                fout<<mn[i].getMobile()<<endl;
                fout<<mn[i].getName()<<endl;
                fout<<mn[i].getPin()<<endl;
                fout<<mn[i].getBalance()<<endl;
                fout<<mn[i].getExist()<<endl;
            }
        fout.close();
        }
        else
        {
            cout<<"Error..."<<endl;
        }
    }
}
int OTP()
{
    int t;
    srand(time(0));
    t=1000+rand()%9000;
    cout<<YELLOW<<"myCash OTP: "<<t<<RESET<<endl;
    return t;
}


int SearchMobile(long long int x)
{
    int idx=-1;
    for (int i = 0; i <= total; i++)
    {
        if(mn[i].getExist()==true)
        {
            if(x==mn[i].getMobile())
            {
                idx=i;
            }
        }

    }
    return idx;

}


int getPin()
{
    string pass="";
    char ch;
    ch=getch();
    while(ch!=13)
    {
        pass.push_back(ch);
        cout<<"*";
        ch=getch();
    }
    cout<<endl;
    return (stoi(pass));
}


int searchPin(int x)
{
    int idx=-1;
    for (int i = 0; i <= total; i++)
    {
        if(x==mn[i].getPin())
        {
            idx=i;
        }
    }
    return idx;
    
}


int checkPin(int x,int y)
{
    int idx=0;
    if(x==mn[y].getPin())
    {
        idx=1;
    }
    return idx;
}


void updateMe(int x)
{
    cout<<"Inside Update me"<<endl;
    cout<<"Old Name: "<<mn[x].getName()<<endl;
    cout<<"New Name (enter to ignore):";
    char ch;
    string new_name="";
    ch=getch();
    while(ch!=13)
    {
        new_name.push_back(ch);
        cout<<ch;
        ch=getch();
    }
    if(new_name.length()>0)
    {
        mn[x].setName(new_name);
    }
    cout<<endl;
    cout<<"Old Pin: *****"<<endl;

    int member_pin1;
    int member_pin2;
    cout<<"New pin (Enter to ignore): ";
    ch=getch();
    if(ch!=13)
    {
        while(1)
        {
            member_pin1=getPin();
            cout<<"Confirm New pin: ";
            member_pin2=getPin();
            if(member_pin1==member_pin2 && member_pin1<100000 && member_pin1>9999)
            {
                break;
            }
            else
            {
                cout<<"Invalid pin..."<<endl;
                cout<<"New pin (Enter to ignore): ";
            }
        }
        int t,o;
        t=OTP();
        chrono::steady_clock::time_point start = chrono::steady_clock::now();
        cout<<"Enter OTP: ";
        cin>>o;
        chrono::steady_clock::time_point end = chrono::steady_clock::now();
        chrono::duration<double> diff=chrono::duration_cast<chrono::duration<double>>(end-start);
        if(o==t && diff.count()<=120)
        {
            mn[x].setPin(member_pin1);
            // UpdateFile();
            cout<<"Update is Successful"<<endl;
            cout<<"Press any key go to main menu....."<<endl;
            getch();
        }
        else
        {
            cout<<"Invalid OTP or Time Expired"<<endl;
            getch();
        }         
    }
        
}


void removeMe(int x)
{
    cout<<"Inside Remove me"<<endl;
    int t,o;
    t=OTP();
    cout<<"Enter OTP: ";
    cin>>o;
    if(t==o)
    {
        mn[x].setExist(false);
        // UpdateFile();
        cout<<"Remove is Successful"<<endl;
        cout<<"Back to MyCash Login Menu"<<endl;
    }
    else
    {
        cout<<"OTP does NOT matched"<<endl;
    }
    getch();
}


void sendMoney(int x)
{
    long long int member_number;
    double amount;
    char ch;
    int idx;
    cout<<"Enter Destination no. (11-digit): ";
    cin>>member_number;
    cout<<"Enter Amount: ";
    cin>>amount;
    cout<<"Sending "<<amount<<" to "<<member_number<<endl;
    cout<<"Are you sure(Y/N)? ";
    cin>>ch;
    if(ch=='Y')
    {
        idx=SearchMobile(member_number);
        if(idx>-1)
        {
            if(mn[x].getBalance()>=amount)
            {
                int t,o;
                t=OTP();
                chrono::steady_clock::time_point start = chrono::steady_clock::now();
                cout<<"Enter OTP: ";
                cin>>o;
                chrono::steady_clock::time_point end = chrono::steady_clock::now();
                chrono::duration<double> diff=chrono::duration_cast<chrono::duration<double>>(end-start);
                if(o==t && diff.count()<=120)
                {
                    mn[idx].cashIn(amount);
                    mn[x].cashOut(amount);
                    // UpdateFile();
                    cout<<"Send Money is Successful"<<endl;
                    cout<<"Press any key go to main menu....."<<endl;

                    index++;
                    long long int n1;
                    double b1;
                    n1=mn[x].getMobile();
                    hs[index].setNumber(n1);
                    hs[index].setTransID(tranID++);
                    hs[index].setDescription("Send Money");
                    hs[index].setAmount(amount);
                    b1=mn[x].getBalance();
                    hs[index].setBalance(b1);
                    index++;
                    long long int n2;
                    double b2;
                    n2=mn[idx].getMobile();
                    hs[index].setNumber(n2);
                    hs[index].setTransID(tranID++);
                    hs[index].setDescription("Receive Money");
                    hs[index].setAmount(amount);
                    b2=mn[idx].getBalance();
                    hs[index].setBalance(b2);

                }
                else
                {
                    cout<<"OTP does NOT matched or Time Expired"<<endl;
                    cout<<"Press any key go to main menu....."<<endl;
                }
            }
            else
            {
                cout<<"Insufficient Fund"<<endl;
                cout<<"Press any key go to main menu....."<<endl;    
            }
        }
        else
        {
            cout<<"Destination Mobile no. is invalid"<<endl;
            cout<<"Press any key go to main menu....."<<endl;
        }
    }
    else if(ch=='N')
    {
        cout<<"Send Money is Unsuccessful"<<endl;
        cout<<"Press any key go to main menu....."<<endl;

    }
    getch();
}


void cashIn(int x)
{
    double amount;
    char ch;
    cout<<"Enter Amount: ";
    cin>>amount;
    cout<<"Cash-in "<<amount<<endl;
    cout<<"Are you sure(Y/N)? ";
    cin>>ch;
    if(ch=='Y')
    {
        mn[x].cashIn(amount);
        // UpdateFile();
        cout<<"Cash-in is Successful"<<endl;
        cout<<"Press any key go to main menu....."<<endl;
        
        index++;
        long long int n;
        double b;
        n=mn[x].getMobile();
        hs[index].setNumber(n);
        hs[index].setTransID(tranID++);
        hs[index].setDescription("Cash-in");
        hs[index].setAmount(amount);
        b=mn[x].getBalance();
        hs[index].setBalance(b);
    }
    else if(ch=='N')
    {
        cout<<"Cash-in is Unsuccessful"<<endl;
        cout<<"Press any key go to main menu....."<<endl;
    }
    getch();
}


void cashOut(int x)
{
    double amount;
    char ch;
    cout<<"Enter Amount: ";
    cin>>amount;
    cout<<"Cash-out "<<amount<<endl;
    cout<<"Are you sure(Y/N)? ";
    cin>>ch;
    if(ch=='Y')
    {
        if(mn[x].getBalance()>=amount)
        {
            int t,o;
            t=OTP();
            chrono::steady_clock::time_point start = chrono::steady_clock::now();
            cout<<"Enter OTP: ";
            cin>>o;
            chrono::steady_clock::time_point end = chrono::steady_clock::now();
            chrono::duration<double> diff=chrono::duration_cast<chrono::duration<double>>(end-start);
            if(o==t && diff.count()<=120)
            {

                mn[x].cashOut(amount);
                // UpdateFile();
                cout<<"Cash-out is Successful"<<endl;
                cout<<"Press any key go to main menu....."<<endl;
                
                index++;
                long long int n;
                double b;
                n=mn[x].getMobile();
                hs[index].setNumber(n);
                hs[index].setTransID(tranID++);
                hs[index].setDescription("Cash-out");
                hs[index].setAmount(amount);
                b=mn[x].getBalance();
                hs[index].setBalance(b);
            }
            else
            {
                cout<<"OTP does NOT matched or Time Expired"<<endl;
                cout<<"Press any key go to main menu....."<<endl;
            }
        }
        else
        {
            cout<<"Insufficient Fund"<<endl;
            cout<<"Press any key go to main menu....."<<endl;
        }
    }
    else if(ch=='N')
    {
        cout<<"Cash-out is Unsuccessful"<<endl;
        cout<<"Press any key go to main menu....."<<endl;
    }
    getch();
}

void Bill(string s,int amount,int x)
{
    char ch;
    cout<<"Your "<<s<<" Bill: "<<amount<<endl;
    cout<<"Want to pay(Y/N)? ";
    cin>>ch;
    if(ch=='Y')
    {
        int t,o;
        t=OTP();
        chrono::steady_clock::time_point start = chrono::steady_clock::now();
        cout<<"Enter OTP: ";
        cin>>o;
        chrono::steady_clock::time_point end = chrono::steady_clock::now();
        chrono::duration<double> diff=chrono::duration_cast<chrono::duration<double>>(end-start);
        if(o==t && diff.count()<=120)
        {
            if(mn[x].getBalance()>=amount)
            {
                mn[x].cashOut(amount);
                // UpdateFile();
                cout<<"Bill Payment is Successful"<<endl;
                cout<<"Press any key go to main menu....."<<endl;

                index++;
                long long int n;
                double b;
                string s2=" Bill";
                n=mn[x].getMobile();
                hs[index].setNumber(n);
                hs[index].setTransID(tranID++);
                hs[index].setDescription(s+s2);
                hs[index].setAmount(amount);
                b=mn[x].getBalance();
                hs[index].setBalance(b);
            }
            else
            {
                cout<<"Insufficient Fund"<<endl;
                cout<<"Press any key go to main menu....."<<endl;
            }     
        }
        else
        {
            cout<<"OTP does NOT matched or Time Expired"<<endl;
            cout<<"Press any key go to main menu....."<<endl;
        }
    }
    else if(ch=='N')
    {
        cout<<"Pay Bill is Unsuccessful"<<endl;
        cout<<"Press any key go to main menu....."<<endl;

    }

}
void PayBill(int x)
{
    int a;
    cout<<"Enter Bill Type (Gas/Electricity/Water/Internet-1/2/3/4):"<<endl;
    cin>>a;
    switch(a)
    {
        case 1: Bill("Gas",500,x); break;
        case 2: Bill("Electricity",1200,x); break;
        case 3: Bill("Water",700,x); break;
        case 4: Bill("Internet",1000,x);
        // UpdateFile();
    }

    getch();
}


void checkBalance(int x)
{
    cout<<"Balance: "<<mn[x].getBalance()<<endl;
    cout<<"Press any key go to main menu....."<<endl;
    getch();
}


void History(int x)
{
    cout<<"Tran ID   Description   Amount   Balance"<<endl;
    for (int i = 0; i <= index; i++)
    {
        if(mn[x].getMobile()==hs[i].getNumber())
        {
            cout<<hs[i].getTransID()<<"       ";
            cout<<hs[i].getDescription()<<"       ";
            cout<<hs[i].getAmount()<<"      ";
            cout<<hs[i].getBalance()<<"     ";
            cout<<endl;
        }
        
    }
    
    cout<<"Press any key go to main menu....."<<endl;
    
    getch();
}

void Login()
{
    long long int member_number;
    int pin;
    cout<<"Enter Mobile No. (11-digit): ";
    cin>>member_number;
    cout<<"Enter pin: ";
    pin=getPin();
    int x;
    x=SearchMobile(member_number);
    if(x!=-1)
    {
        if(checkPin(pin,x))
        {
            for(;;)
            {
                int op;
                if(mn[x].getExist()==false)
                {
                    break;
                }            
                cout<<"Login is Successful"<<endl;
                op=menu();
                if(op==9) break;
                switch(op)
                {
                    case 1: updateMe(x); break;
                    case 2: removeMe(x); break;
                    case 3: sendMoney(x); break;
                    case 4: cashIn(x); break;
                    case 5: cashOut(x); break;
                    case 6: PayBill(x); break;
                    case 7: checkBalance(x); break;
                    case 8: History(x); break;

                }
            }
            getch();
           
        }
        else
        {
            cout<<"Invalid login"<<endl;
        }
    }
    else
    {
        cout<<"Member NOT exists"<<endl;
    }
    getch();
}


void Register()
{
    total++;
    long long int member_number;
    int member_pin1;
    int member_pin2;
    string member_name;

    cout<<"Enter Mobile No. (11-digit): ";
    cin >> member_number ;
    if(member_number>999999999&&member_number<100000000000)
    {
    if(SearchMobile(member_number)==-1)
    {    
        cout<<"Enter Name: ";
        cin>> member_name;

        while(1)
        {
            cout<<"Enter pin (5-digit): ";
            member_pin1=getPin();
            cout<<"Reconfirm pin: ";
            member_pin2=getPin();
            if(member_pin1==member_pin2 && member_pin1<100000 && member_pin1>9999)
            {
                break;
            }
            else
            {
                cout<<"Invalid pin or pins must be same"<<endl;
            }         
        }
        int x,o;
        srand(time(0));
        x=1000+rand()%9000;
        cout<<YELLOW<<"myCash OTP: "<<x<<RESET<<endl;
        chrono::steady_clock::time_point start = chrono::steady_clock::now();
        cout<<"Enter OTP: ";
        cin>>o;
        chrono::steady_clock::time_point end = chrono::steady_clock::now();
        chrono::duration<double> diff=chrono::duration_cast<chrono::duration<double>>(end-start);
        if(x==o && diff.count()<=120)
        {

            mn[total].setMobile(member_number);
            mn[total].setName(member_name);
            mn[total].setPin(member_pin1);
            mn[total].setExist(true);
            FileIn(total);

            cout <<"Registration Successful..."<<endl;
        }
        else
        {
            cout<<"OTP does NOT matched or Time Expired"<<endl;
        }
    }
    else
    {
        cout<<"Member already exists"<<endl;
    }
    }
    else
    {
        cout<<"Invalid Mobile Number"<<endl;
    }

    getch();
}


int main()
{
    FileOut();
    for(;;)
    {
        int op=first();
        if(op==3) break;
        switch(op)
        {
            case 1: Login(); break;
            case 2: Register(); break;
        }
    }
    UpdateFile();
    return 0;
}