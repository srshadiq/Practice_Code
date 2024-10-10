#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int total = -1,t=0;
class Member
{
private:
    string mobile;
    string Name;
    int pin;
    float amount;
    bool access;

public:
    Member()
    {
        mobile;
        Name;
        pin;
        amount;
        access;
    }
    void setData(string s, string c, int p, bool a)
    {
        mobile = s;
        Name = c;
        pin = p;
        access = a;
    }
    void setaccess(bool a)
    {
        access = a;
    }
    void setAmount(float a)
    {
        amount = a;
    }
    string getmobile()
    {
        return mobile;
    }
    string getName()
    {
        return Name;
    }
    int getPin()
    {
        return pin;
    }
    float getamount()
    {
        return amount;
    }
    bool getaccess()
    {
        return access;
    }
};
Member m[50];
class History{
    private:
        vector<string> e;
        vector<float> amount;
    public:
        void addDescription(string c,float a){
            e.push_back(c);
            amount.push_back(a);
        }
        void DisplayHistory(){
            cout<<"Recent History: \n";
            for(int i=0;i<e.size();i++){
                cout<<"Tran. Id: "<<i+1<<", "<<e[i]<<", Amount: "<<amount[i]<<endl;
            }
        }
};
History h[1000];
void insertFile()
{
    ofstream fout("E:\\file.txt");
    if (fout.is_open()) {
        for (int i = 0; i <= total; i++) {
            fout << m[i].getmobile() << endl;
            fout << m[i].getName() << endl;
            fout << m[i].getPin() << endl;
            fout << m[i].getamount()<<endl;
            fout << m[i].getaccess() << endl;
        }
        fout.close();
    } else {
        cout << "Error in accessing data" << endl;
    }
}
void readFile()
{
    ifstream fin("E:\\file.txt");
    if (fin.is_open()) {
        while (!fin.eof()) {
            total++;
            string mobile, name;
            int pin;
            float balance;
            fin >> mobile;
            if (mobile.empty()) break;
            fin >> name;
            fin >> pin;
            fin >> balance;
            m[total].setData(mobile,name,pin,true);
            m[total].setAmount(balance);
        }
        fin.close();
    }
}
int searchM(string s)
{
    int i, flag = -1;
    flag = 0;
    for(int i=0;i<=total;i++){
        if(m[i].getmobile()==s){
            flag=i;
            break;
        }
    }
    return flag;
}
int getpin()
{
    string pass = " ";
    char ch;
    ch = getch();
    while (ch != 13)
    {
        pass.push_back(ch);
        cout << '*';
        ch = getch();
    }
    return (stoi((pass)));
}
void updateMe(int i)
{
    system("cls");
    string n, nw, sw;
    int p, pw;
    cout << "Enter pin: ";
    p = getpin();
    cout << endl;
    if (p == m[i].getPin())
    {
        cout << "Current number: " << m[i].getmobile() << endl;
        cout << "Current name: " << m[i].getName() << endl;
        cout << "Current Pin: " << m[i].getPin() << endl;
    }
    if (p == m[i].getPin())
    {
        cout << "Enter new number: ";
        cin >> nw;
        cout << "Enter new name: ";
        cin >> sw;
        cout << "Enter new pin: ";
        pw = getpin();
        bool a1 = true;
        m[i].setData(nw, sw, pw, a1);
        insertFile();
        cout << "Current number: " << m[i].getmobile() << endl;
        cout << "Current name: " << m[i].getName() << endl;
        cout << "Current Pin: " << m[i].getPin() << endl;
    }
    cout << "Press Any key\n";
    getch();
}
void removeme(int i)
{
    system("cls");
    bool a;
    if (i != -1)
    {
        a = false;
        m[i].setaccess(a);
    }
    cout << "Press any key\n";
    getch();
}
void sendmoney(int i)
{
    system("cls");
    string s2;
    cout << "Enter receiver's number: ";
    cin >> s2;
    float amo;
    cout << "Enter your amount: ";
    cin >> amo;
    for (;;)
    {
        int pi;
        cout << "Enter pin: ";
        pi = getpin();
        cout << endl;
        if (pi == 0)
        {
            break;
        }
        if (pi == m[i].getPin())
        {
            if (m[i].getamount() >= amo)
            {
                m[i].setAmount(m[i].getamount() - amo);
                h[t++].addDescription("Send Money",amo);
                break;
            }
            else
            {
                cout << "Insufficient balance\n";
                break;
            }
        }
        else
        {
            cout << "Wrong pin\n";
            cout << "Enter 0 to exit\n";
        }
    }
    getch();
}
void cashin(int i)
{
    system("cls");
    float amo, f = m[i].getamount();
    cout << "Enter cash-in amount: ";
    cin >> amo;
    m[i].setAmount(f + amo);
    cout << "Your current balance is: " << m[i].getamount() << endl;
    h[t++].addDescription("Cash In",amo);
    getch();
}
void cashout(int i)
{
    system("cls");
    float amo, l;
    string c;
    cout << "Enter agent's number: ";
    cin >> c;
    cout << "Enter your amount: ";
    cin >> amo;
    for (;;)
    {
        int pi;
        cout << "Enter pin: ";
        pi = getpin();
        l = m[i].getamount();
        if (pi == 0)
        {
            break;
        }
        if (pi == m[i].getPin())
        {
            cout << endl;
            if (l >= (amo + 10))
            {
                m[i].setAmount(l - amo - 10);
                cout << "Current balance: " << l - amo - 10 << endl;
                h[t++].addDescription("Cash Out",amo);
                break;
            }
            else
            {
                cout << "No sufficient ammount\n";
                break;
            }
        }
        else
        {
            cout << "\nWrong pin number\n";
            cout << "Enter 0 to exit\n";
        }
    }
    getch();
}
void bill(string si)
{
    system("cls");
    float amo, x, z;
    cout << "Enter the amount: ";
    cin >> amo;
    int i = searchM(si);
    x = m[i].getamount();
    for (;;)
    {
        cout << "Enter pin: ";
        int pin = getpin();
        cout << endl;
        if (pin == 0)
        {
            break;
        }
        if (pin == m[i].getPin())
        {
            if (amo <= x)
            {
                x = x - amo;
                m[i].setAmount(x);
                cout << "Your current balance is: " << x << endl;
                break;
            }
            else
            {
                cout << "Insuffecient amount!!\n";
                break;
            }
        }
        else
        {
            cout << "Wrong pin number\n";
            cout << "Enter 0 to exit\n";
        }
    }
    getch();
}
void bill2(string si)
{
    system("cls");
    string s2;
    cout << "Enter the receiver number: ";
    cin >> s2;
    int y = searchM(s2);
    float amo, x, z;
    cout << "Enter the amount: ";
    cin >> amo;
    int i = searchM(si);
    x = m[i].getamount();
    z = m[y].getamount();
    cout << "Enter pin: ";
    int pin = getpin();
    cout << endl;
    if (pin == m[y].getPin())
    {
        if (amo <= x)
        {
            m[y].setAmount(z + amo);
            x = x - amo;
            m[i].setAmount(x);
            cout << "Your current balance is: " << x << endl;
        }
        else
        {
            cout << "Insuffecient amount!!\n";
        }
    }
    else
    {
        cout << "Wrong pin number\n";
    }
    getch();
}
void paybill(string s)
{
    system("cls");
    for (;;)
    {
        cout << "Select one: \n";
        cout << "1. Electricity bill\n";
        cout << "2. Pay Ticket\n";
        cout << "3. Shop pay\n";
        cout << "4. Exit\n";
        int no;
        cin >> no;
        if (no == 4)
        {
            break;
        }
        switch (no)
        {
        case 1:
            bill(s);
            break;
        case 2:
            bill(s);
            break;
        case 3:
            bill2(s);
            break;
        }
    }
    getch();
}
void displaybalnce(int i)
{
    system("cls");
    if (i != -1)
    {
        cout << "Current amount is: " << m[i].getamount() << endl;
    }
    else
    {
        cout << "Account not found\n";
    }
    getch();
}
int menu1()
{
    system("cls");
    cout << "***Mycash***\n";
    cout << "1. Login\n2. Register\n3. Exit\n";
    cout << " Enter Your Option: ";
    int c;
    cin >> c;
    // getch();
    return c;
}
int menu2()
{
    system("cls");
    cout << "********** MyCash Menu ********\n";
    int c;
    cout << "1. Update Me\n";
    cout << "2. Remove Me\n";
    cout << "3. Send Money\n";
    cout << "4. Cash in\n";
    cout << "5. Cash-out\n";
    cout << "6. Pay Bill\n";
    cout << "7. Check Balance\n";
    cout << "8. History\n";
    cout << "9. Logout\n";
    cout << " Enter Your Option(1-9): ";
    cin >> c;
    // getch();
    return c;
}
void displayHistory(){
    system("cls");
    for(int i=0;i<t;i++){
        h[i].DisplayHistory();
    }
    getch();
}
void login()
{
    system("cls");
    string s, c;
    int p, q,index;
    float amo;
    bool acs;
    readFile();
    cout << "Enter mobile no: ";
    cin >> s;
    cout << "Enter pin: ";
    p = getpin();
    cout << endl;
    for(int i=0;i<=total;i++){
        if(m[i].getmobile()==s){
            index=i;
            break;
        }
    }
    for (;;)
    {
        if (p == 0)
        {
            break;
        }
        if (p == m[index].getPin())
        {
            for (;;)
            {
                int x = menu2();
                if (x == 9)
                {
                    insertFile();
                    break;
                }
                switch (x)
                {
                case 1:
                    updateMe(index);
                    break;
                case 2:
                    removeme(index);
                    break;
                case 3:
                    sendmoney(index);
                    break;
                case 4:
                    cashin(index);
                    break;
                case 5:
                    cashout(index);
                    break;
                case 6:
                    paybill(s);
                    break;
                case 7:
                    displaybalnce(index);
                    break;
                case 8:
                    displayHistory();
                    break;
                }
            }
            break;
        }
        else
        {
            cout << "Wrong pin number\n";
            cout << "Enter 0 to exit\n";
        }
    }
    cout << "Press any key\n";
    getch();
}
void reg()
{
    system("cls");
    total++;
    string na, no;
    int p, x, y, p2;
    float amo = 0;
    cout << "Enter your mobile no: ";
    cin >> no;
    cout << "Enter your name: ";
    cin >> na;
    for (;;)
    {
        cout << "Enter your pin: ";
        p = getpin();
        cout << endl;
        string z=to_string(p);
        if (z.length() != 5)
        {
            cout << "Password is not valid\n";
        }
        else if(z.length()==5)
        {
            break;
        }
    }
    cout << "Confirm pin: ";
    p2 = getpin();
    cout << endl;
    srand(time(0));
    x = 1000 + rand() % 9000;
    cout << "Mycash OTP: " << x << endl;
    chrono::steady_clock::time_point start = chrono::steady_clock::now();
    cout << "Enter OTP: ";
    cin >> y;
    chrono::steady_clock::time_point end = chrono::steady_clock::now();
    chrono::duration<double> diff=chrono::duration_cast<chrono::duration<double>>(end-start);
    if(y==x && diff.count()<=120){
        bool a = true;
        m[total].setData(no, na, p, a);
        insertFile();
        cout << "Registration complete\n";
    }
    else{
        cout<<"Wrong OTP or time expired\n";
    }
    getch();
}
int main()
{
    for (;;)
    {
        int op = menu1();
        if (op == 3)
            break;
        switch (op)
        {
        case 1:
            login();
            break;
        case 2:
            reg();
            break;
        }
    }
    insertFile();
    return 0;
}
